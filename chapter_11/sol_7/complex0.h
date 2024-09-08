#include <iostream>
#include <istream>
class complex {
 private:
  double real;
  double imaginary;

 public:
  complex(double x = 0, double y = 0) : real(x), imaginary(y){};
  complex operator+(const complex& c) const {
    return complex(real + c.real, imaginary + c.imaginary);
  }
  complex operator-(const complex& c) const {
    return complex(real - c.real, imaginary - c.imaginary);
  }
  complex operator*(const complex& c) const {
    return complex(real * c.real - imaginary * c.imaginary,
                   real * c.imaginary + imaginary * c.real);
  }
  complex operator~() const { return complex(real, -imaginary); }
  friend std::istream& operator>>(std::istream& is, complex& c) {
    std::cout << "Enter the real part: ";
    std::cin >> c.real;
    std::cout << "Enter the imaginary part: ";
    std::cin >> c.imaginary;
    return is;
  }
  friend std::ostream& operator<<(std::ostream& os, const complex& c) {
    std::cout << "(" << c.real << "," << c.imaginary << "i)";
    return os;
  }
  friend complex operator*(const int n, const complex& c) {
    return complex(n * c.real, n * c.imaginary);
  }
};
