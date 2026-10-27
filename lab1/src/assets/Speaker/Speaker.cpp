#include "Speaker.h"

#include <iostream>

void my::Speaker::printData(const char *pref) const {
  std::cout << '\n'
            << pref << "\nName: " << this->getNmae()
            << "\nOrganization: " << _organization_name
            << "\nReport: " << _report_name << "\nAnnotation"
            << _report_annotation << std::endl;
}
// namespace SpeakerInternal

my::Speaker::Speaker()
    : my::Base(), _organization_name(std::string()),
      _report_name(std::string()), _report_annotation(std::string()) {
  std::cout << "\nCreate empty speaker" << std::endl;
}

my::Speaker::Speaker(const char *name, const char *organization,
                     const char *report, const char *annotation)
    : my::Base(name), _organization_name(std::string(organization)),
      _report_name(std::string(report)),
      _report_annotation(std::string(annotation)) {
  this->printData("Create speacker:");
}

my::Speaker::Speaker(const std::string &name, const std::string &organization,
                     const std::string &report, const std::string &annotation)
    : my::Base(name), _organization_name(std::string(organization)),
      _report_name(std::string(report)),
      _report_annotation(std::string(annotation)) {
  this->printData("Create speacker:");
}

my::Speaker::Speaker(const Speaker &other)
    : my::Base(other.getNmae()),
      _organization_name(std::string(other._organization_name)),
      _report_name(std::string(other._report_name)),
      _report_annotation(std::string(other._report_annotation)) {
  this->printData("Create speaker:");
}

my::Speaker::~Speaker() { this->printData("Removing speacker:"); }

const char *my::Speaker::getOrganizationName() const {
  return _report_name.c_str();
}
const char *my::Speaker::getReportName() const { return _report_name.c_str(); }

const char *my::Speaker::getReportAnnotetion() const {
  return _report_annotation.c_str();
}

int my::Speaker::setOrganizationName(const char *newName) {
  _organization_name = newName;
  return 0;
}

int my::Speaker::setReportName(const char *newName) {
  _report_name = newName;
  return 0;
}

int my::Speaker::setReportAnnotetion(const char *newAnnotation) {
  _report_annotation = newAnnotation;
  return 0;
}

void my::Speaker::print() const { this->printData("Speacker:"); }
