#include <iostream>
#include <string>
// constants
// function prototype
void strcount(const std::string& str);
int main() {
  using namespace std;
  string input;
  cout << "Enter a line:\n";
  getline(cin, input);
  while (true) {
    // dispose of remainder
    if (input == "") break;
    strcount(input);
    cout << "Enter next line (empty line to quit):\n";
    getline(cin, input);
  }
  cout << "Bye\n";
  return 0;
}
void strcount(const std::string& str) {
  using namespace std;
  static int total = 0;  // static local variable
  cout << "\"" << str << "\" contains ";
  total += str.size();
  cout << str.size() << " characters\n";
  cout << total << " characters total\n";
}
