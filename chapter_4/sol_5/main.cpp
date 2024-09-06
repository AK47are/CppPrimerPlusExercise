#include <iostream>
struct CandyBar {
  char brand[20];
  float weight;
  int calories;
};
int main() {
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  std::cout << snack.brand << "\n"
            << snack.weight << "\n"
            << snack.calories << "\n";
}
