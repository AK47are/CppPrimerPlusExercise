#include <iostream>
int main() {
  using std::cin;
  using std::cout;
  int h, min;
  std::cout << "Enter the number of hours: ";
  std::cin >> h;
  std::cout << "Enter the number of minutes: ";
  std::cin >> min;
  std::cout << "Time: " << h << ":" << min << "\n";
}
