#include <iostream>

template <typename T = long double>
long double sum_value(T value = 0) {
  return value;
}

template <typename T, typename... Args>
long double sum_value(T value, Args... args) {
  return value + sum_value(args...);
}
// long double sum_value() {return 0;}

int main() {
  std::cout << sum_value(1, 2, 3, '2', 'y', 1.2 * 12, 3.2) << std::endl;
  std::cout << sum_value() << std::endl;
  return 0;
}
