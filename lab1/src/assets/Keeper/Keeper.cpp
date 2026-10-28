#include "Keeper.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

#include "../Administrtion/Administrtion.h"
#include "../Conference/Conference.h"
#include "../Speaker/Speaker.h"

my::Keeper::Keeper() : _len(0), _cap(10), _data(new Base *[10]) {}
my::Keeper::Keeper(size_t cap) : _len(0), _cap(cap), _data(new Base *[cap]) {}

my::Keeper::~Keeper() {
  for (int i = 0; i < _len; i++)
    delete _data[i];

  delete[] _data;
}

void my::Keeper::push(Base *elem) {
  if (_len == _cap) {
    Base **newdata = new Base *[_cap + 5];
    if (!newdata)
      throw std::runtime_error("Error allocationg memory in Keeper");

    for (int i = 0; i < _len; i++)
      newdata[i] = _data[i];

    delete[] _data;
    _data = newdata;
    _cap += 5;
  }

  _data[_len] = elem;
  _len += 1;
}

void my::Keeper::print() {
  for (int i = 0; i < _len; i++)
    std::cout << _data[i]->represent() << std::endl;
}

void my::Keeper::save() {
  std::ofstream f("data");
  for (int i = 0; i < _len; i++)
    f << _data[i]->represent() << std::endl;

  f.close();
}

size_t _find_first_space(std::string s) {
  size_t res;
  while (s.at(res) != ' ' && s.at(res) != '\0' && s.at(res) != '\n')
    res++;
  if (s.at(res) == ' ')
    return res;
  return 0;
}

void my::Keeper::load() {
  std::ifstream f("data");
  if (!f) {
    std::cout << "File not found" << std::endl;
    return;
  }
  std::string line;
  std::string pars[4];
  size_t pos;
  while (std::getline(f, line)) {
    if (line == "[Speaker]") {
      for (int i = 0; i < 4; i++) {
        std::getline(f, line);
        pos = line.find(':');
        pars[i] = line.substr(pos + 2);
      }

      this->push(new Speaker(pars));
    }

    if (line == "[Administration]") {
      for (int i = 0; i < 3; i++) {
        std::getline(f, line);
        pos = line.find(':');
        pars[i] = line.substr(pos + 2);
      }
      this->push(new Administration(pars));
    }

    if (line == "[Conference]") {
      for (int i = 0; i < 3; i++) {
        std::getline(f, line);
        pos = line.find(':');
        pars[i] = line.substr(pos + 2);
      }

      this->push(new Conference(pars));
    }
  }
  f.close();
}

size_t my::Keeper::len() const { return _len; }
my::Base *my::Keeper::operator[](size_t i) { return _data[i]; }
