#include "assets/myStr/myStr.h"
#include <iostream>

int main() {
  my::string test("Test string");
  my::string copyTest(test);
  my::string defaultTest;
  defaultTest.set("Set test");
  std::cout << test << '\n' << copyTest << '\n' << defaultTest << std::endl;
  return 0;
}
