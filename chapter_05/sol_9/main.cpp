#include <cstring>
#include <iostream>
using namespace std;
int main() {
  cout << "Enter words (to stop, type the word done): \n";
  string word;
  int num = 0;
  for (int i = 0;; ++i) {
    cin >> word;
    if (word == "done") break;
    ++num;
  }
  cout << "You entered a total of " << num << " words.\n";
}
