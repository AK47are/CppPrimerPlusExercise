#include <cstring>
#include <iostream>
#include <ostream>
#include <string>
class Account {
 private:
  std::string name;
  char account[20];
  double deposit;

 public:
  Account(std::string n, const char* a, const double& d) : name(n), deposit(d) {
    strcpy(account, a);
  }
  void show() {
    std::cout << name << "\t" << *account << "\t" << deposit << std::endl;
  }
  void store(const double& d) { deposit += d; }
  void withdraw(const double& d) { deposit -= d; }
};

int main() {
  Account am("AM", "2340123", 200);
  am.show();
  am.store(100);
  am.show();
  am.withdraw(100);
  am.show();
}
