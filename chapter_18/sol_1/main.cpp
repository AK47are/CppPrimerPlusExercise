#include <initializer_list>
#include <iostream>
using std::initializer_list;
template <typename T> auto average_list(initializer_list<T> ini) -> T;

int main() {
  using namespace std;
  // list Of double deduced from list contents
  auto q = average_list({15.4, 10.7, 9.0});
  cout << q << endl;
  // list of int deduced from list contents
  cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
  // forced list Of double
  auto ad = average_list<double>({'A', 70, 65.33});
  cout << ad << endl;
  return 0;
}

template <typename T> auto average_list(initializer_list<T> ini) -> T {
  T sum = 0;
  int count = 0;
  for (auto temp : ini) {
    sum += temp;
    ++count;
  }
  return sum / count;
}
