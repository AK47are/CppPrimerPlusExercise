#include <iostream>
int main() {
  int temp, sum = 0;
  do {
    std::cout << "Enter number(0 stop): ";
    std::cin >> temp;
    sum += temp;
  } while (temp != 0);
  std::cout << "sum: " << sum << "\n";
}
