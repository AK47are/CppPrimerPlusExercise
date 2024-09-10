#include <iostream>
const int Max = 5;
// function prototypes
double* fill_array(double* begin, double* end);
void show_array(double* begin, const double* end);  // don't change data
void revalue(double r, double* begin, double* end);
int main() {
  using namespace std;
  double properties[Max];
  double* end = fill_array(&properties[0], &properties[Max - 1]);
  show_array(&properties[0], end);
  int size = 0;
  for (double* i = &properties[0];; i++) {
    ++size;
    if (i == end) break;
  }
  if (size > 0) {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor))  // bad input
    {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, &properties[0], end);
    show_array(&properties[0], end);
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}
double* fill_array(double* begin, double* end) {
  using namespace std;
  double temp;
  double* i;
  for (i = begin;; ++i) {
    cout << "Enter value: ";
    cin >> temp;
    if (!cin)  // bad input
    {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Bad input; input process terminated.\n";
      break;
    } else if (temp < 0 || i != end)  // signal to terminate
      break;
    *i = temp;
  }
  return i;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(double* begin, const double* end) {
  using namespace std;
  for (double* i = begin;; i++) {
    cout << "Property: $";
    cout << *i << endl;
    if (i == end) break;
  }
}
// multiplies each element of ar[] by r
void revalue(double r, double* begin, double* end) {
  for (double* i = begin;; i++) {
    *i *= r;
    if (i == end) break;
  }
}
