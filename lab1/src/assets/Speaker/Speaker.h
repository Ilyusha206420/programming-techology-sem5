#pragma once

#include "../Person/Person.h"
#include "../myStr/myStr.h"

namespace my {
class Speacer : public my::Person {
public:
private:
  my::string *_organization;
  my::string *report_name;
  my::string *report_annotation;
};
} // namespace my
