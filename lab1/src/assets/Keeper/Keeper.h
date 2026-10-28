#pragma once

#include "../Base/Base.h"
#include <cstddef>

namespace my {
class Keeper {
public:
  Keeper();
  Keeper(size_t cap);
  ~Keeper();

  void push(Base *elem);
  void print();

  void save();
  void load();

  size_t len() const;
  my::Base *operator[](size_t i);

private:
  Base **_data;
  size_t _len;
  size_t _cap;
};
} // namespace my
