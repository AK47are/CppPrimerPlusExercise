#include <iostream>
#include <ostream>
typedef double (*ptr)(double, double);
// using ptr = double (*)(double, double);  // C11新方法
double calculate(double a, double b, ptr fn) { return fn(a, b); }
double add(double a, double b) { return a + b; }
double multiply(double a, double b) { return a * b; }
double divise(double a, double b) { return a / b; }

int main() {
  ptr test[3] = {add, multiply, divise};
  double a, b;
  while (true) {
    std::cout << "Enter a, b: ";
    std::cin >> a >> b;
    for (int i = 0; i < 3; ++i) std::cout << " " << calculate(a, b, test[i]);
    std::cout << std::endl;
  }
}
