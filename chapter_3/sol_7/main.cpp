#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  double fuelPer100Km;
  cout << "Enter your fuelPer100Km: ";
  cin >> fuelPer100Km;
  cout << "The mileage of the car per gallon of fuel: "
       << 62.14 * 3.875 / fuelPer100Km << "\n";
}
