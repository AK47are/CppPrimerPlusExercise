#include <iostream>

double average(double sum, int i) { return sum / i; }
void show(double sum, int i) {
  std::cout << "\nAverage grade: " << average(sum, i) << std::endl;
}
int main() {
  double golf[10], sum = 0;
  int i;
  for (i = 0; i < 10; ++i) {
    std::cout << "Enter your golf grade (q to quit): ";
    if (!(std::cin >> golf[i])) break;
    sum += golf[i];
  }
  for (int j = 0; j < i; ++j) std::cout << " " << golf[j];
  average(sum, i);
  show(sum, i);
}
