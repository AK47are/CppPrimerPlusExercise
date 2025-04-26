#include <array>
#include <iostream>
const int size = 101;
int main() {
  std::array<long double, size> factorials;
  factorials[1] = factorials[0] = 1LL;
  for (int i = 2; i < size; ++i) factorials[i] = i * factorials[i - 1];
  for (int i = 0; i < size; ++i)
    std::cout << i << "! = " << factorials[i] << std::endl;
  return 0;
}
