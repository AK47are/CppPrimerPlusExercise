#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <vector>
std::vector<int> lotto(int c, int n) {
  std::vector<int> result;
  srand((unsigned)time(NULL));
  for (int i = 0; i < n; ++i) {
    result.push_back(std::rand() % c + 1);
  }
  return result;
}

int main() {
  std::vector<int> winners = lotto(51, 6);
  std::cout << "Winners:";
  for (auto i = winners.begin(); i != winners.end(); ++i)
    std::cout << " " << *i;
  std::cout << std::endl;
}
