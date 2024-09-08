#include <iostream>

#include "stonewt.h"
int main() {
  Stonewt test1;
  Stonewt test2(47);
  Stonewt test3(21, 32);
  std::cout << test1 << test2 << test3;
  std::cout << "Change mode: \n";
  test1.change_mode(Mode::stone);
  test2.change_mode(Mode::pounds);
  test3.change_mode(Mode::pds_left);
  std::cout << test1 << test2 << test3;
  Stonewt test4 = test2 + test3;
  std::cout << test4;
  test4 = test3 - test2;
  std::cout << test4;
  test4 = test3 * test2;
  std::cout << test4;
}
