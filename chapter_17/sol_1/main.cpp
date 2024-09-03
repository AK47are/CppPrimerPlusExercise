#include <iostream>
using namespace std;

int main() {
  int count = 0;
  // for (char c = cin.get(); c != '$'; cin.get(c)) ++count;
  while (cin.peek() != '$') {
    cin.get();
    ++count;
  }
  cout << count << endl;
  cout << (char)cin.get() << endl;
}
