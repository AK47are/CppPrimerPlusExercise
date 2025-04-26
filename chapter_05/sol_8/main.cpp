#include <cstring>
#include <iostream>
using namespace std;
int main() {
  cout << "Enter words (to stop, type the word done): \n";
  char word[20];
  int num = 0;
  for (int i = 0;; ++i) {
    cin >> word;
    if (!strcmp(word, "done")) break;
    ++num;
  }
  cout << "You entered a total of " << num << " words.\n";
}
