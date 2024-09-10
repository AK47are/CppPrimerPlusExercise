#include <iostream>
#include <ostream>
long long factor(int n) {
  if (n == 1 || n == 0)
    return 1;
  else
    return factor(n - 1) * n;
}
int main() {
  int n;
  std::cout << "Enter number: ";
  std::cin >> n;
  do {
    std::cout << "The factorial is " << factor(n) << std::endl;
    std::cout << "Enter number: ";
  } while (std::cin >> n);
}
