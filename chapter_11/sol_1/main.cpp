// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <cstdlib>  // rand(), srand() prototypes
#include <ctime>    // time() prototype
#include <fstream>
#include <iostream>

#include "vect.h"
int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));  // seed random-number generator
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  cout << "Enter target distance: ";
  cin >> target;
  cout << "Enter step length: ";
  if (!(cin >> dstep)) return 1;
  ofstream fout("vect.txt");
  fout << "Target Disstance: " << target << ", Stemp Size: " << dstep << endl;
  while (result.magval() < target) {
    direction = rand() % 360;
    step.reset(dstep, direction, Vector::POL);
    fout << steps << ": " << result << endl;
    result = result + step;
    steps++;
  }
  fout << "After " << steps
       << " steps, the subject "
          "has the following location:\n";
  fout << result << endl;
  result.polar_mode();
  fout << " or\n" << result << endl;
  fout << "Average outward distance per step = " << result.magval() / steps
       << endl;
  return 0;
}
