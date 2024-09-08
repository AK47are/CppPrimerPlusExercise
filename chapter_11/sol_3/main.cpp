// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <cstdlib>  // rand(), srand() prototypes
#include <ctime>    // time() prototype
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
  cout << "Enter times: ";
  int times = 0;
  cin >> times;
  cout << "Enter target distance: ";
  cin >> target;
  cout << "Enter step length: ";
  if (!(cin >> dstep)) return 1;
  int max_steps, min_steps, steps_sum;
  max_steps = min_steps = steps_sum = 0;
  for (int i = 0; i < times; ++i) {
    while (result.magval() < target) {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    if (i == 0) max_steps = min_steps = steps;
    max_steps = (steps > max_steps) ? steps : max_steps;
    min_steps = (steps < min_steps) ? steps : min_steps;
    steps_sum += steps;
    cout << steps << "\n";
    steps = 0;
    result.reset(0.0, 0.0);
  }
  cout << "Max step:  " << max_steps << "\nMin step: " << min_steps
       << "\nAverage step: " << steps_sum / times << endl;
  cout << "Bye!\n";
  cin.clear();
  while (cin.get() != '\n') continue;
  return 0;
}
