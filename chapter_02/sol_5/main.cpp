#include <iostream>
void func1(double degree) {
  std::cout << degree << " degrees Celsius is " << 1.8 * degree + 32.0
            << " degrees Fahrenheit.\n";
}
int main() {
  double degree;
  std::cout << "Please enter a Celsius value: ";
  std::cin >> degree;
  func1(degree);
}
