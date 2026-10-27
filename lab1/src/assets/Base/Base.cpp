#include "Base.h"

my::Base::Base() : _name(std::string()) {}
my::Base::Base(const char *name) : _name(std::string(name)) {}

my::Base::~Base() {}

const char *my::Base::getNmae() const { return _name.c_str(); }

int my::Base::setName(const char *newName) {
  _name = newName;
  return 0;
}
