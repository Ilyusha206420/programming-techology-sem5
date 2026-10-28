#include "Base.h"

my::Base::Base() : _name(std::string()) {}
my::Base::Base(const char *name) : _name(std::string(name)) {}
my::Base::Base(const std::string &name) : _name(name) {}

my::Base::~Base() {}

std::string my::Base::getNmae() const { return std::string(_name); }

void my::Base::setName(std::string &newName) { _name = std::string(newName); }
