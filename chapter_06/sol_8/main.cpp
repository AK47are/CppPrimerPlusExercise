#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream fin("test.txt");
  int char_num = 0;
  char c;
  while (fin >> c) ++char_num;
  cout << char_num << " in all.\n";
}
