#include "Base.h"

my::Base::Base() : _name(new my::string()) {}
my::Base::Base(const char *name) : _name(new my::string(name)) {}

my::Base::~Base() { delete _name; }

char *my::Base::getNmae() const { return _name->get(); }

int my::Base::setName(const char *newName) {
  _name->set(newName);
  return 0;
}
