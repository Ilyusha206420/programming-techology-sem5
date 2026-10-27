#include "myStr.h"
#include <iostream>
#include <stdexcept>

namespace my {
int strcpy(const char *src_str, char **tgt_str) {
  if (*tgt_str)
    delete[] *tgt_str;

  size_t len = 0;
  while (src_str[len])
    len++;

  *tgt_str = new char[len + 1];
  if (!*tgt_str)
    throw std::runtime_error("Error in ny::string\nCan't allocate memory!\n");

  for (int i = 0; i < len; i++)
    (*tgt_str)[i] = src_str[i];

  return len;
}

std::ostream &operator<<(std::ostream &os, const my::string &s) {
  os << s.get();
  return os;
}
} // namespace my

my::string::string() : _str(nullptr), _len(0) {}
my::string::string(const char *str) : _len(my::strcpy(str, &_str)) {}
my::string::string(const string &other)
    : _len(my::strcpy(other.get(), &_str)) {}

my::string::~string() {
  if (_str)
    delete[] _str;
}

char *my::string::get() const { return _str; }

int my::string::set(const char *newStr) {
  _len = my::strcpy(newStr, &_str);
  return 0;
}
