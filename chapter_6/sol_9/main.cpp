#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct Contributor {
  string name;
  double money;
};

int main() {
  int n;
  ifstream fin("donator.txt");
  fin >> n;
  fin.get();  // remove carrage.
  Contributor *donator = new Contributor[n];
  for (int i = 0; i < n; ++i) {
    getline(fin, donator[i].name);
    // fin >> x不会清除流中的换行符，getline会读取换行符。（平台Linux）
    fin >> donator[i].money;
    fin.get();  // remove carrage.
  }
  cout << "Grand Patrons\n";
  bool flag = 0;
  for (int i = 0; i < n; ++i)
    if (donator[i].money > 100000) {
      cout << donator[i].name << "\t" << donator[i].money << endl;
      flag = 1;
    }
  if (flag == 0) cout << "none\n";
  flag = 0;
  cout << "Patrons\n";
  for (int i = 0; i < n; ++i)
    if (donator[i].money < 100000) {
      cout << donator[i].name << "\t" << donator[i].money << endl;
      flag = 1;
    }
  if (flag == 0) cout << "none\n";
  flag = 0;
}
