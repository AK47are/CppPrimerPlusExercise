#include <iostream>
#include <ostream>
int main() {
  int first, last;
  std::cin >> first >> last;
  int sum = 0;
  for (int i = first; i <= last; ++i) sum += i;
  std::cout << sum << std::endl;
}
