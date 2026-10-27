#pragma once

#include <string>

namespace my {
class Base {
public:
  Base();
  Base(const char *name);
  Base(const std::string &name);
  virtual ~Base();

  const char *getNmae() const;
  int setName(const char *newName);

  virtual void print() const = 0;

private:
  std::string _name;
};
} // namespace my
