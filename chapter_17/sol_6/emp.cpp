#include "emp.h"

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln,
                     const std::string& j)
    : fname(fn), lname(ln), job(j) {}
abstr_emp::abstr_emp(const abstr_emp& a)
    : fname(a.fname), lname(a.lname), job(a.job) {
  std::cout << "Test:" << fname << lname << job << std::endl;
}

void abstr_emp::ShowAll() const {
  std::cout << "fname: " << fname << std::endl;
  std::cout << "lname: " << lname << std::endl;
  std::cout << "job: " << job << std::endl;
}

void abstr_emp::SetAll() {
  std::cout << "fname: ";
  std::cin >> fname;
  std::cout << "lname: ";
  std::cin >> lname;
  std::cout << "job: ";
  std::cin >> job;
}

abstr_emp::~abstr_emp() {}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e) {
  std::cout << "fname: " << e.fname << std::endl;
  std::cout << "lname: " << e.lname << std::endl;
  std::cout << "job: " << e.job << std::endl;
  return os;
}

employee::employee(const std::string& fn, const std::string& ln,
                   const std::string& j)
    : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const { abstr_emp::ShowAll(); }
void employee::SetAll() { abstr_emp::SetAll(); }

manager::manager(const std::string& fn, const std::string& ln,
                 const std::string& j, int ico)
    : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}
manager::manager(const manager& e) : abstr_emp(e), inchargeof(e.inchargeof) {}

void manager::ShowAll() const {
  abstr_emp::ShowAll();
  std::cout << "inchargeof: " << inchargeof << std::endl;
}

void manager::SetAll() {
  abstr_emp::SetAll();
  std::cout << "inchargeof: ";
  std::cin >> inchargeof;
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j,
           const std::string& rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo){};
fink::fink(const abstr_emp& e, const std::string& rpo)
    : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto) {}

void fink::ShowAll() const {
  abstr_emp::ShowAll();
  std::cout << "reportsto: " << reportsto << std::endl;
}

void fink::SetAll() {
  abstr_emp::SetAll();
  std::cout << "reportsto: ";
  std::cin >> reportsto;
}

highfink::highfink(const std::string& fn, const std::string& ln,
                   const std::string& j, const std::string& rpo)
    : fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico)
    : abstr_emp(e) {
  std::string& temp1 = ReportsTo();
  temp1 = rpo;
  int& temp2 = InChargeOf();
  temp2 = ico;
}

highfink::highfink(const fink& f, int ico) : abstr_emp(f), fink(f) {
  int& temp2 = InChargeOf();
  temp2 = ico;
}

highfink::highfink(const manager& m, const std::string& rpo)
    : abstr_emp(m), manager(m) {
  std::string& temp1 = ReportsTo();
  temp1 = rpo;
}

highfink::highfink(const highfink& h) : fink(h) {
  int& temp2 = InChargeOf();
  temp2 = h.inchargeof;
}

void highfink::ShowAll() const {
  manager::ShowAll();
  std::cout << "reportsto: " << ReportsTo() << std::endl;
}

void highfink::SetAll() {
  abstr_emp::SetAll();
  std::string& temp1 = ReportsTo();
  int& temp2 = InChargeOf();
  std::cout << "reportsto: ";
  std::cin >> temp1;
  std::cout << "inchargeof: ";
  std::cin >> temp2;
}

void abstr_emp::WriteAll(std::ofstream& fout) {
  fout << fname << " " << lname << " " << job;
}

void employee::WriteAll(std::ofstream& fout) {
  fout << "1" << " ";
  abstr_emp::WriteAll(fout);
}

void manager::WriteAll(std::ofstream& fout) {
  fout << "2" << " ";
  abstr_emp::WriteAll(fout);
  fout << " " << inchargeof;
}

void fink::WriteAll(std::ofstream& fout) {
  fout << "3" << " ";
  abstr_emp::WriteAll(fout);
  fout << " " << reportsto;
}

void highfink::WriteAll(std::ofstream& fout) {
  fout << "4" << " ";
  abstr_emp::WriteAll(fout);
  fout << " " << InChargeOf();
  fout << " " << ReportsTo();
}

void abstr_emp::getall(std::ifstream& fin) { fin >> fname >> lname >> job; }
void employee::getall(std::ifstream& fin) { abstr_emp::getall(fin); }

void manager::getall(std::ifstream& fin) {
  abstr_emp::getall(fin);
  fin >> inchargeof;
}

void fink::getall(std::ifstream& fin) {
  abstr_emp::getall(fin);
  fin >> reportsto;
}

void highfink::getall(std::ifstream& fin) {
  abstr_emp::getall(fin);
  fin >> (int&)InChargeOf();
  fin >> (std::string&)ReportsTo();
}
