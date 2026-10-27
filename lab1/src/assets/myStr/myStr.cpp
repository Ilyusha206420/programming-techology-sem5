#include "myStr.h"
#include <stdexcept>

my::string::string() : _str(nullptr), _len(0), _cap(0) {}

my::string::string(const char *str) {
  size_t len = 0;
  while (str[len])
    len++;

  _len = len;
  _cap = len;
  _str = new char[len + 1];

  if (!_str)
    throw std::runtime_error(
        "Error in string constructor\nCan't allocate memory");

  for (int i = 0; i < len; i++)
    _str[i] = str[i];

  _str[len] = '\0';
}

my::string::string(const string &str) : _cap(str._cap), _len(str._len) {
  _str = new char[_len + 1];
  if (!_str)
    throw std::runtime_error(
        "Error in string copy constructor\nCan't allocate memory");

  for (int i = 0; i < 0; i++)
    _str[i] = str._str[i];

  _str[_len] = '\0';
}

my::string::~string() {
  if (_str)
    delete _str;
}

char *my::string::get() const { return _str; }

namespace my {
std::ostream &operator<<(std::ostream &os, const my::string &s) {
  os << s.get();
  return os;
}
} // namespace my
