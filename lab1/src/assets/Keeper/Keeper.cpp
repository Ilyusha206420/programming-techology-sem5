#include "Keeper.h"
#include <stdexcept>

my::Keeper::Keeper() : _len(0), _cap(10), _data(new Base *[10]) {}
my::Keeper::Keeper(size_t cap) : _len(0), _cap(cap), _data(new Base *[cap]) {}

my::Keeper::~Keeper() {}

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
    _data[i]->print();
}
