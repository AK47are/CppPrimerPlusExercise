#include <cstring>
#include <iostream>
using namespace std;
class Port {
 private:
  char* brand;
  char style[20];  // i.e., tawny, ruby, vintage
  int bottles;

 public:
  Port(const char* br = "none", const char* st = "none", int b = 0) {
    brand = new char[20];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
  }
  Port(const Port& p) {
    brand = new char[20];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
  }  // copy constructor
  virtual ~Port() { delete[] brand; }
  Port& operator=(const Port& p) {
    brand = new char[20];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
  }
  Port& operator+=(int b) {
    bottles += b;
    return *this;
  }  // adds b to bottles
  Port& operator-=(int b) {
    bottles -= b;
    return *this;
  }  // subtracts b from bottles, if available.
  int BottleCount() const { return bottles; }
  virtual void Show() const {
    cout << "Brand: " << brand << "\nKind: " << style
         << "\nBottles: " << bottles << "\n";
  }
  friend ostream& operator<<(ostream& os, const Port& p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
  }
};
class VintagePort : public Port  // style necessarily = "vintage"
{
 private:
  char* nickname;  // i.e., "The Noble" or "Old Velvet", etc.
  int year;        // vintage year
 public:
  VintagePort(){};
  VintagePort(const char* br, int b, const char* nn, int y)
      : Port(br, "vintage", b), year(y) {
    nickname = new char[20];
    strcpy(nickname, nn);
  }
  VintagePort(const VintagePort& vp) : Port(vp), year(vp.year) {
    nickname = new char[20];
    strcpy(nickname, vp.nickname);
  }
  ~VintagePort() { delete[] nickname; }
  VintagePort& operator=(const VintagePort& vp) {
    *this = vp;
    nickname = new char[20];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
  }
  void Show() const {
    Port::Show();
    cout << "Nickname: " << nickname << "\nYear: " << year << "\n";
  }
  friend ostream& operator<<(ostream& os, const VintagePort& vp) {
    operator<<(os, (Port&)vp);
    os << vp.nickname << ", " << vp.year;
    return os;
  }
};
