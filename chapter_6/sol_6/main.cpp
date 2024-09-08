#include <iostream>
#include <string>
using namespace std;
struct Contributor {
  string name;
  double money;
};

int main() {
  int n;
  cout << "Tell me how many contributors: ";
  cin >> n;
  Contributor *donator = new Contributor[n];
  for (int i = 0; i < n; ++i) {
    cout << "Name: ";
    cin >> donator[i].name;
    cout << "Money: ";
    cin >> donator[i].money;
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
