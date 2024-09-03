#include <string>
#include <utility>

#include "Cpmv.h"
using namespace std;

int main() {
  Cpmv test1;
  Cpmv test2{"wat", "hell"};
  Cpmv test3(test2);
  Cpmv test4 = std::move(Cpmv("set", "etl"));
  test1 = test2;
  test4 = std::move(test2);
  return 0;
}
