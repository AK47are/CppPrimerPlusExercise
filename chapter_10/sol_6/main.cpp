#include <iostream>
class Move {
 private:
  double x;
  double y;

 public:
  Move(double a = 0, double b = 0) : x(a), y(b) {}  // sets x, y to a, b
  void showmove() const {
    std::cout << x << " " << y << std::endl;
  }  // shows current x, y values
  Move add(const Move& m) const { return Move(x + m.x, y + m.y); }
  // this function adds x of m to x of invoking object to get new x,
  // adds y of m to y of invoking object to get new y, creates a new
  // move object initialized to new x, y values and returns it
  void reset(double a = 0, double b = 0) {
    x = a, y = b;
  }  // resets x,y to a, b
};

int main() {
  Move test1(2, 3.5);
  test1.showmove();
  Move test2(43, 11);
  test2.showmove();
  Move test3 = test1.add(test2);
  test3.showmove();
  test3.reset(2, 4);
  test3.showmove();
}
