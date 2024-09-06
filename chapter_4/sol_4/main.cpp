#include <iostream>
int main() {
  using namespace std;
  string fn;
  string ln;

  cout << "Enter your first name: ";
  getline(cin, fn);
  cout << "Enter your last name: ";
  getline(cin, ln);
  string all = ln + ", " + fn;
  cout << "Here's the information in a single string: " << all << "\n";
  return 0;
}
