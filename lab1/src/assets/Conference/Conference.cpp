#include "Conference.h"

#include <iostream>

my::Conference::Conference()
    : Base(), _date(std::string()), _time(std::string()) {
  std::cout << "\nCreated empty Conferention" << std::endl;
}

my::Conference::Conference(const std::string &name, const std::string &date,
                           const std::string &time)
    : Base(name), _date(std::string(date)), _time(std::string(time)) {
  std::cout << "\nCreated Conferention:" << this->represent() << std::endl;
}

my::Conference::Conference(std::string arg_arr[3])
    : Base(std::string(arg_arr[0])), _date(std::string(arg_arr[1])),
      _time(std::string(arg_arr[2])) {
  std::cout << "\nCreated conferention:" << this->represent() << std::endl;
}

my::Conference::~Conference() {
  std::cout << "\nDisstructor called for:" << this->represent() << std::endl;
}

std::string my::Conference::getDate() const { return std::string(_date); }
std::string my::Conference::getTime() const { return std::string(_time); }

void my::Conference::setDate() {}
void my::Conference::setTime() {}

std::string my::Conference::represent() const {
  std::string res = "\n[Conference]\nName: ";
  res += this->getNmae();
  res += "\nDate: ";
  res += _date;
  res += "\nTime: ";
  res += _time;
  return res;
}
