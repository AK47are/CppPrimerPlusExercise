#include <iostream>
using namespace std;
int main() {
  double x, y;
  do {
    cout << "Enter x and y: ";
    cin >> x >> y;
    if (x != 0 && y != 0)
      cout << "调和平均数：" << 2.0 * x * y / (x + y) << endl;
  } while (x != 0 && y != 0);
}
