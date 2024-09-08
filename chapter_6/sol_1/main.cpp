#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string input;
  getline(cin, input, '@');
  for (int i = 0; i < input.size(); ++i)
    if (isdigit(input[i]))
      input.erase(i, 1);
    else if (islower(input[i]))
      input[i] = toupper(input[i]);  // string类索引可以直接修改。
    else if (isupper(input[i]))
      input[i] = tolower(input[i]);
  cout << input << endl;
}
