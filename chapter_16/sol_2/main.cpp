#include <ctype.h>

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool isPall(string& input) {
  for (auto i = input.begin(); i != input.end(); ++i)
    if (!isalnum(*i)) {
      input.erase(i);
      --i;
    } else if (isupper(*i)) {
      *i = tolower(*i);
    }
  cout << input << endl;
  string temp = input;
  reverse(temp.begin(), temp.end());
  cout << temp << endl;
  return input == temp;
}
int main() {
  string input;
  getline(cin, input);
  cout << isPall(input) << endl;
}
