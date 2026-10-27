#include "Speaker.h"
#include "../myStr/myStr.h"

my::Speacer::Speacer()
    : my::Person(), _organization_name(new my::string()),
      _report_name(new my::string()), _report_annotation(new my::string()) {}

my::Speacer::Speacer(const char *name, const char *organization,
                     const char *report, const char *annotation)
    : my::Person(name), _organization_name(new my::string(organization)),
      _report_name(new my::string(report)),
      _report_annotation(new my::string(annotation)) {}

my::Speacer::Speacer(const Speacer &other)
    : my::Person(other.getNmae()),
      _organization_name(new my::string(*other._organization_name)),
      _report_name(new my::string(*other._report_name)),
      _report_annotation(new my::string(*other._report_annotation)) {}

my::Speacer::~Speacer() {
  if (_organization_name)
    delete _organization_name;
  if (_report_name)
    delete _report_name;
  if (_report_annotation)
    delete _report_annotation;
}

char *my::Speacer::getOrganizationName() const {
  return _organization_name->get();
}

char *my::Speacer::getReportName() const { return _report_name->get(); }

char *my::Speacer::getReportAnnotetion() const {
  return _report_annotation->get();
}

int my::Speacer::setOrganizationName(const char *newName) {
  _organization_name->set(newName);
  return 0;
}

int my::Speacer::setReportName(const char *newName) {
  _report_name->set(newName);
  return 0;
}

int my::Speacer::setReportAnnotetion(const char *newAnnotation) {
  _report_annotation->set(newAnnotation);
  return 0;
}
