#include <iostream>
int main() {
  const int factor = 12;
  using std::cin;
  using std::cout;
  int height;
  cout << "Enter your height(feet): ";
  cin >> height;
  cout << "Your height is " << height / factor << " feet " << height % factor
       << " inch.\n";
}
