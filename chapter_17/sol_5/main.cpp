#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  const int MAX_FILE_COUNT = 2;
  const string INPUT_FILES[MAX_FILE_COUNT]{"mat.dat", "pat.dat"};
  ifstream fin;
  ofstream fout;
  vector<string> name;
  for (int i = 0; i < MAX_FILE_COUNT; ++i) {
    fin.open(INPUT_FILES[i]);
    if (!fin.is_open()) break;
    string temp;
    getline(fin, temp);
    while (!fin.eof()) {
      name.push_back(temp);
      getline(fin, temp);
      cout << temp << endl;
    }
    fin.close();
    fin.clear();
  }
  sort(name.begin(), name.end());
  auto last = unique(name.begin(), name.end());
  name.erase(last, name.end());
  fout.open("matpat.dat");
  for (int i = 0; i < name.size(); ++i) fout << name[i] << endl;
  fout.close();
}
