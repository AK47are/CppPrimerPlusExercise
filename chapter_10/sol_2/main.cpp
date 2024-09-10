#include <cstring>
#include <iostream>
#include <string>
using namespace std;
class Person {
 private:
  static const int LIMIT = 25;
  string lname;       // Person’s last name
  char fname[LIMIT];  // Person’s first name
 public:
  Person() {
    lname = "";
    fname[0] = '\0';
  }  // #1
  Person(const string& ln, const char* fn = "Heyyou") : lname(ln) {
    strcpy(fname, fn);
  }  // #2
  // the following methods display lname and fname
  void Show() const {
    if (lname != "") cout << fname << ", " << lname;
  }  // firstname lastname format
  void FormalShow() const {
    if (lname != "") cout << lname << ", " << fname;
  }  // lastname, firstname format
};

int main() {
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy", "Sam");
  one.Show();
  cout << endl;
  two.FormalShow();
  cout << endl;
  three.Show();
  cout << endl;
}
