#include "Speaker.h"

#include <iostream>
#include <string>

my::Speaker::Speaker()
    : my::Base(), _organization_name(std::string()),
      _report_name(std::string()), _report_annotation(std::string()) {
  std::cout << "\nCreated empty speaker" << std::endl;
}

my::Speaker::Speaker(const char *name, const char *organization,
                     const char *report, const char *annotation)
    : my::Base(name), _organization_name(std::string(organization)),
      _report_name(std::string(report)),
      _report_annotation(std::string(annotation)) {
  std::cout << "\nCreated speaker:" << this->represent() << std::endl;
}

my::Speaker::Speaker(const std::string &name, const std::string &organization,
                     const std::string &report, const std::string &annotation)
    : my::Base(name), _organization_name(std::string(organization)),
      _report_name(std::string(report)),
      _report_annotation(std::string(annotation)) {
  std::cout << "\nCreated speaker:" << this->represent() << std::endl;
}

my::Speaker::Speaker(const std::string arg_arr[4])
    : my::Base(arg_arr[0]), _organization_name(arg_arr[1]),
      _report_name(arg_arr[2]), _report_annotation(arg_arr[3]) {
  std::cout << "\nCreated speaker:" << this->represent() << std::endl;
}

my::Speaker::Speaker(const Speaker &other)
    : my::Base(other.getNmae()),
      _organization_name(std::string(other._organization_name)),
      _report_name(std::string(other._report_name)),
      _report_annotation(std::string(other._report_annotation)) {
  std::cout << "\nCreated speaker:" << this->represent() << std::endl;
}

my::Speaker::~Speaker() {
  std::cout << "\nDisstructor called for:" << this->represent() << std::endl;
}

std::string my::Speaker::getOrganizationName() const {
  return std::string(_organization_name);
}
std::string my::Speaker::getReportName() const {
  return std::string(_report_name);
}

std::string my::Speaker::getReportAnnotetion() const {
  return std::string(_report_annotation);
}

void my::Speaker::setOrganizationName(std::string &newName) {
  _organization_name = std::string(newName);
}

void my::Speaker::setReportName(std::string &newName) {
  _report_name = std::string(newName);
}

void my::Speaker::setReportAnnotetion(std::string &newAnnotation) {
  _report_annotation = std::string(newAnnotation);
}

std::string my::Speaker::represent() const {
  std::string res = "\n[Speaker]\nName: ";
  res += this->getNmae();
  res += "\nOrganization name: ";
  res += _organization_name;
  res += "\nReport name: ";
  res += _report_name;
  res += "\nReport annotation: ";
  res += _report_annotation;
  return res;
}
