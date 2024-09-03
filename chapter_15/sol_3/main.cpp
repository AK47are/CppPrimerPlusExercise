#include <cmath>
#include <iostream>

#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);
int main() {
  using namespace std;
  double x, y, z;
  while (true) {
    cout << "Enter two numbers:";
    cin >> x >> y;
    try {
      z = hmean(x, y);
      cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
      cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y)
           << endl;
    } catch (logic_error& b) {
      b.what();
      cout << "Error.\n";
      break;
    }
  }
  cout << "Bye!\n";
  return 0;
}

double hmean(double a, double b) {
  if (a == -b) throw bad_hmean(a, b);
  return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
  if (a < 0 || b < 0) throw bad_gmean(a, b);
  return std::sqrt(a * b);
}
