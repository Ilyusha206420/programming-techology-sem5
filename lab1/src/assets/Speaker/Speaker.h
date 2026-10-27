#pragma once

#include "../Base/Base.h"
#include "../myStr/myStr.h"

namespace my {
class Speacer : public my::Base {
public:
  Speacer();
  Speacer(const char *name, const char *organization, const char *report,
          const char *annotation);
  Speacer(const Speacer &other);
  ~Speacer();

  char *getOrganizationName() const;
  char *getReportName() const;
  char *getReportAnnotetion() const;

  int setOrganizationName(const char *newName);
  int setReportName(const char *newName);
  int setReportAnnotetion(const char *newAnnotation);

private:
  my::string *_organization_name;
  my::string *_report_name;
  my::string *_report_annotation;
};
} // namespace my
