#include <cstring>
#include <iostream>
int main() {
  using namespace std;
  const int ArSize = 20;
  char fn[ArSize];
  char ln[ArSize];

  cout << "Enter your first name: ";
  cin.getline(fn, ArSize);  // reads through newline
  cout << "Enter your last name: ";
  cin.getline(ln, ArSize);
  strcat(ln, ", ");
  strcat(ln, fn);
  cout << "Here's the information in a single string: " << ln << "\n";
  return 0;
}
