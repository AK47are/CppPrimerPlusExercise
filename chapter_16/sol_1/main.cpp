#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& input) {
  string temp = input;
  reverse(temp.begin(), temp.end());
  // cout << temp << endl;
  return temp == input;
}
int main() {
  string input;
  getline(cin, input);
  cout << isPalindrome(input) << endl;
}
