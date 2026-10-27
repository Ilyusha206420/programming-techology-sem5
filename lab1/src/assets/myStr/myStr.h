#pragma once

#include <cstddef>
#include <ostream>

namespace my {
class string {
public:
  string();
  string(const char *str);
  string(const string &other);
  ~string();

  char *get() const;
  int set(const char *newStr);

  friend std::ostream &operator<<(std::ostream &os, const string &s);

private:
  char *_str = nullptr;
  size_t _len;
};
} // namespace my
