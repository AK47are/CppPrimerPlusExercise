#include <iostream>
using namespace std;
int main() {
  int length;
  cout << "Enter number of rows: ";
  cin >> length;
  for (int i = 0; i < length; ++i) {
    for (int j = 0; j < length - i - 1; ++j) cout << ".";
    for (int k = 0; k < i + 1; ++k) cout << "*";
    cout << "\n";
  }
}
