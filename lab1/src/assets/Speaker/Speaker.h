#pragma once

#include "../Base/Base.h"

namespace my {
class Speaker : public my::Base {
public:
  Speaker();
  Speaker(const char *name, const char *organization, const char *report,
          const char *annotation);
  Speaker(const Speaker &other);
  ~Speaker();

  const char *getOrganizationName() const;
  const char *getReportName() const;
  const char *getReportAnnotetion() const;

  int setOrganizationName(const char *newName);
  int setReportName(const char *newName);
  int setReportAnnotetion(const char *newAnnotation);

  void print() const override;

private:
  std::string _organization_name;
  std::string _report_name;
  std::string _report_annotation;
};
} // namespace my
