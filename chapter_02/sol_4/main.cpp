#include <iostream>
int main() {
  using std::cin;
  using std::cout;
  int age;
  std::cout << "Enter the age: ";
  std::cin >> age;
  std::cout << "Your age in months is " << age * 12 << ".\n";
}
