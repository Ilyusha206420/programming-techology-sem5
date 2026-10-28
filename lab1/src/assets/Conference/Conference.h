#pragma once

#include "../Base/Base.h"
#include <string>

namespace my {
class Conference : public Base {
public:
  Conference();
  Conference(const std::string &name, const std::string &date,
             const std::string &time);
  Conference(std::string arg_arr[3]);
  ~Conference();

  std::string getDate() const;
  std::string getTime() const;

  void setDate();
  void setTime();

  std::string represent() const override;

private:
  std::string _date;
  std::string _time;
};
} // namespace my
