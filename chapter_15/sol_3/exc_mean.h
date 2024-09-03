#include <iostream>
#include <stdexcept>
class bad_hmean : public std::logic_error {
 private:
  double v1;
  double v2;

 public:
  // logic_error hasn't default constructor
  bad_hmean(double a, double b) : logic_error("Error"), v1(a), v2(b){};
  virtual void what() {
    std::cout << "hmean(" << v1 << ", " << v2
              << "): " << "invalid arguments: a = -b\n";
  }
};

class bad_gmean : public std::logic_error {
 private:
  double v1;
  double v2;

 public:
  bad_gmean(double a, double b) : logic_error("Error"), v1(a), v2(b){};
  virtual void what() {
    std::cout << "gmean(" << v1 << ", " << v2
              << "): " << "invalid arguments: a, b < 0\n";
  }
};
