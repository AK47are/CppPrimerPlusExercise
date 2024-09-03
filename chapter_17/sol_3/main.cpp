// Copyright [2024.7.3] <AK47are>
#include <fstream>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main(int argc, char *argv[]) {
  if (argc != 3) {
    cout << "The arguments is not enough!" << endl;
    return 0;
  }
  ifstream fin(argv[1]);
  ofstream fout(argv[2]);
  if (!fin.is_open() || !fout.is_open()) {
    cout << "The file can't open!" << endl;
    return 0;
  }
  string line;
  while (getline(fin, line)) {
    fout << line << endl;
  }
  return 1;
}
