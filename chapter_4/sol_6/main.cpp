#include <iostream>
struct CandyBar {
  char brand[20];
  float weight;
  int calories;
};
int main() {
  CandyBar snack[2] = {"Mocha Munch", 2.3, 350, "Test", 1, 1};
  std::cout << snack[0].brand << "\n"
            << snack[0].weight << "\n"
            << snack[0].calories << "\n";
  std::cout << snack[1].brand << "\n"
            << snack[1].weight << "\n"
            << snack[1].calories << "\n";
}
