#include "Administrtion.h"
#include <iostream>

my::Administration::Administration()
    : my::Base(), _post(std::string()), _area_of_responsibility(std::string()) {
  std::cout << "\nCreated empty Administration" << std::endl;
}

my::Administration::Administration(const std::string &name,
                                   const std::string &post,
                                   const std::string &aor)
    : my::Base(name), _post(post), _area_of_responsibility(aor) {
  std::cout << "\nCreated Administration:" << this->represent() << std::endl;
}

my::Administration::Administration(const std::string arg_arr[3])
    : my::Base(arg_arr[0]), _post(arg_arr[1]),
      _area_of_responsibility(arg_arr[2]) {
  std::cout << "\nCreated Administration:" << this->represent() << std::endl;
}

my::Administration::~Administration() {
  std::cout << "\nDisstructor called for:" << this->represent() << std::endl;
}

std::string my::Administration::getPost() const { return std::string(_post); }

std::string my::Administration::getAOR() const {
  return std::string(_area_of_responsibility);
}

void my::Administration::setPost(const std::string &newPost) {
  _post = std::string(newPost);
}

void my::Administration::setAOR(const std::string &newAOR) {
  _area_of_responsibility = std::string(newAOR);
}

std::string my::Administration::represent() const {
  std::string res = "\n[Administration]\nName: ";
  res += this->getNmae();
  res += "\nPost: ";
  res += _post;
  res += "\nArea of responsibility: ";
  res += _area_of_responsibility;
  return res;
}
