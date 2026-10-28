#pragma once

#include "../Base/Base.h"

namespace my {
class Speaker : public my::Base {
public:
  Speaker();
  Speaker(const char *name, const char *organization, const char *report,
          const char *annotation);
  Speaker(const std::string &name, const std::string &organization,
          const std::string &report, const std::string &annotation);
  Speaker(const std::string arg_arr[4]);
  Speaker(const Speaker &other);
  ~Speaker();

  std::string getOrganizationName() const;
  std::string getReportName() const;
  std::string getReportAnnotetion() const;

  void setOrganizationName(std::string &newName);
  void setReportName(std::string &newName);
  void setReportAnnotetion(std::string &newAnnotation);

  std::string represent() const override;

private:
  std::string _organization_name;
  std::string _report_name;
  std::string _report_annotation;
};
} // namespace my
