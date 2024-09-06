#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  long long all, us;
  cout << "Enter the world's population: ";
  cin >> all;
  cout << "Enter the population of the US: ";
  cin >> us;
  cout << "The population of the Us is " << (double)us / (double)all * 100
       << "% of the world population.\n";
}
