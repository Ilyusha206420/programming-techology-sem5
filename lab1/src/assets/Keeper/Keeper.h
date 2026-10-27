#pragma once

#include "../Base/Base.h"
#include <cstddef>

namespace my {
class Keeper {
  Keeper();
  ~Keeper();

  void push(Base *elem);

private:
  Base **_data;
  size_t _len;
  size_t _cap;
};
} // namespace my
