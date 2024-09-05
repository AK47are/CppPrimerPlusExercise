#ifndef CLASSIC_H
#define CLASSIC_H
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class Cd {
 private:
  string performers;
  string label;
  int selections;
  double playtime;

 public:
  Cd(const char *s1, const char *s2, int m, double x)
      : selections(m), playtime(x) {
    performers = s1;
    label = s2;
  }
  Cd(){};
  virtual void Report() const {
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
  }
};

class Classic : public Cd {
 private:
  string mainwork;

 public:
  Classic(){};
  Classic(const char *s3, const char *s1, const char *s2, int m, double x)
      : Cd(s1, s2, m, x) {
    mainwork = s3;
  };
  void Report() const {
    cout << "mainwork: " << mainwork << endl;
    Cd::Report();
  }
  ~Classic(){};
};
#endif
