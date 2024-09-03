#include "Cpmv.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Cpmv::Cpmv() { cout << "Default Constructor" << endl; }

Cpmv::Cpmv(string q, string z) {
  pi = new Info;
  pi->qcode = q;
  pi->zcode = z;
  cout << "string Constructor" << endl;
}

Cpmv::Cpmv(const Cpmv &cp) {
  pi = new Info;
  pi->qcode = cp.pi->qcode;
  pi->zcode = cp.pi->zcode;
  cout << "Copy Constructor" << endl;
}

Cpmv::Cpmv(Cpmv &&mv) {
  pi = mv.pi;
  mv.pi = nullptr;
  cout << "Move Constructor" << endl;
}

Cpmv &Cpmv::operator=(const Cpmv &cp) {
  pi = new Info;
  pi->qcode = cp.pi->qcode;
  pi->zcode = cp.pi->zcode;
  cout << "Assign Constructor" << endl;
  return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv) {
  pi = mv.pi;
  mv.pi = nullptr;
  cout << "Move Assign Constructor" << endl;
  return *this;
}

Cpmv::~Cpmv() {
  cout << "Destructor" << endl;
  // delete pi;
}
