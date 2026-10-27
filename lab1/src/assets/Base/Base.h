#pragma once

#include "../myStr/myStr.h"

namespace my {
class Base {
public:
  Base();
  Base(const char *name);
  Base(const my::string &name);
  virtual ~Base();

  char *getNmae() const;
  int setName(const char *newName);

  virtual void print() const = 0;

private:
  string *_name;
};
} // namespace my
