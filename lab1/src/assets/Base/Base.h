#pragma once

#include <string>

namespace my {
class Base {
public:
  Base();
  Base(const char *name);
  Base(const std::string &name);
  virtual ~Base();

  std::string getNmae() const;
  void setName(std::string &newName);

  virtual std::string represent() const = 0;

private:
  std::string _name;
};
} // namespace my
