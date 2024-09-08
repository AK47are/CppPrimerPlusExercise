#include <array>
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  array<double, 10> donation;
  double n, sum = 0;
  int i = 0, num = 0;
  while (cin >> n && i != 10) {
    donation[i] = n;
    sum += n;
    ++i;
  };
  cout << "Average donation: " << sum / i << endl;
  for (int j = 0; j < i; ++j)
    if (donation[j] > sum / i) ++num;
  cout << "> average: " << num << endl;
  return 0;
}
