#include <iostream>
int main() {
  const double to_feet = 12, to_meter = 0.0254, to_kg = 2.2;
  using std::cin;
  using std::cout;
  double feet, inch, pound;
  cout << "Enter your height(feet and inch): ";
  cin >> feet;
  cin >> inch;
  cout << "Enter your pound: ";
  cin >> pound;
  cout << "Your BMI is "
       << (pound / to_kg) / ((inch * to_feet + feet) * to_meter) *
              ((inch * to_feet + feet) * to_meter)
       << "\n";
}

