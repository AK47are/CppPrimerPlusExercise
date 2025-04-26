#include <iostream>
struct Item {
  double expenses[4];
};
// constant data
const int Seasons = 4;
const char* Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(double pa[]);
// function that uses array object without modifying it
void show(double da[]);
int main() {
  Item expense;
  fill(expense.expenses);
  show(expense.expenses);
  return 0;
}
void fill(double pa[]) {
  using namespace std;
  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> pa[i];
  }
}
void show(double pa[]) {
  using namespace std;
  double total = 0.0;
  cout << "\nEXPENSES\n";
  for (int i = 0; i < Seasons; i++) {
    cout << Snames[i] << ": $" << pa[i] << endl;
    total += pa[i];
  }
  cout << "Total Expenses: $" << total << endl;
}
