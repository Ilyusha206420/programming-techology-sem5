#pragma once

#include "../myStr/myStr.h"

namespace my {
class Person {
public:
  Person();
  Person(const char *name);
  Person(const my::string &name);

  char *getNmae() const;
  int setName(const char *newName);

private:
  string *_name;
};
} // namespace my
