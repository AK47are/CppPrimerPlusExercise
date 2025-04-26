#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  double mileage, gasUsed;
  cout << "Enter your mileage: ";
  cin >> mileage;
  cout << "Enter your gasUsed: ";
  cin >> gasUsed;
  cout << "The mileage of the car per gallon of fuel: " << mileage / gasUsed
       << "\n";
}
