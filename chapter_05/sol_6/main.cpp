#include <iostream>
#include <string>
using namespace std;

int main() {
  string months[12] = {"January",   "February", "March",    "April",
                       "May",       "June",     "July",     "August",
                       "September", "October",  "November", "December"};

  int sales[3][12] = {
      {1200, 1300, 1100, 1600, 2000, 1800, 1500, 1700, 1400, 1600, 2100, 2200},
      {1500, 1400, 1200, 1700, 1900, 1600, 1800, 2000, 1700, 1800, 2300, 2400},
      {1600, 1500, 1400, 1800, 2200, 2000, 2100, 1900, 1800, 1900, 2500, 2600}};

  int sum[3] = {0};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 12; j++) {
      sum[i] += sales[i][j];
    }
    cout << "Sum: " << sum[i] << endl;
  }
  cout << "all year units sold: " << sum[0] + sum[1] + sum[2] << endl;

  return 0;
}
