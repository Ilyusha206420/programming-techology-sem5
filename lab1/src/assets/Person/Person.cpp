#include "Person.h"

my::Person::Person() : _name(new my::string()) {}
my::Person::Person(const char *name) : _name(new my::string(name)) {}

char *my::Person::getNmae() const { return _name->get(); }

int my::Person::setName(const char *newName) {
  _name->set(newName);
  return 0;
}
