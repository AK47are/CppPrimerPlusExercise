#include <iostream>
#include <string>
#include <valarray>
using ArrayInt = std::valarray<int>;

class Wine {
 private:
  template <typename T1, typename T2>
  class Pair {
   public:
    T1 year;
    T2 quantity;
    Pair(const T1 yr, const T2 bot) : year(yr), quantity(bot){};
  };
  typedef Pair<ArrayInt, ArrayInt> PairArray;
  PairArray pair;
  std::string name;
  int year_quantity;

 public:
  Wine(const char* l = "NO", int y = 0, const int yr[] = nullptr,
       const int bot[] = nullptr)
      : name(l), year_quantity(y), pair(ArrayInt(yr, y), ArrayInt(bot, y)) {}
  void GetBottles() {
    for (int i = 0; i < year_quantity; ++i) {
      std::cout << "input year and quantity, now " << year_quantity - i - 1
                << ": ";
      std::cin >> pair.year[i] >> pair.quantity[i];
    }
  }
  std::string& Label() { return name; }
  int sum() {
    int add = 0;
    for (int i = 0; i < year_quantity; ++i) {
      add += pair.quantity[i];
    }
    return add;
  }
  void Show() {
    std::cout << "Wine: " << name << std::endl;
    for (int i = 0; i < year_quantity; ++i) {
      std::cout << "\t" << pair.year[i] << "\t" << pair.quantity[i]
                << std::endl;
    }
  }
};
