#include <iostream>
double func(double light_years) { return 63240 * light_years; }
int main() {
  double light_years;
  std::cout << "Enter the number of light years: ";
  std::cin >> light_years;
  std::cout << light_years << " light years = " << func(light_years)
            << " astronomical units.\n";
}
