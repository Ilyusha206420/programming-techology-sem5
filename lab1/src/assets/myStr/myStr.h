#pragma once

#include <cstddef>
#include <ostream>

namespace my {
class string {
public:
  string();
  string(char *str);
  string(const char *str);
  string(const string &str);
  ~string();

  char *get() const;

  friend std::ostream &operator<<(std::ostream &os, const string &s);

private:
  char *_str;
  size_t _len;
  size_t _cap;
};
} // namespace my
