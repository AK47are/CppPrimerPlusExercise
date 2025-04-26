#include <iostream>
#include <string>
using namespace std;

int main() {
  string months[12] = {"January",   "February", "March",    "April",
                       "May",       "June",     "July",     "August",
                       "September", "October",  "November", "December"};

  int salesVolume[12] = {1200, 1500, 1100, 1600, 2000, 1800,
                         1700, 1900, 1400, 1600, 2100, 2200};

  int sum = 0;
  for (int i = 0; i < 12; i++) {
    cout << months[i] << ": " << salesVolume[i] << " units sold" << endl;
    sum += salesVolume[i];
  }
  cout << "all year units sold: " << sum << endl;

  return 0;
}
