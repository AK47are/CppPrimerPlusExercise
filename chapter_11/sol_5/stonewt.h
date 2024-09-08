// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <ostream>
enum class Mode { stone, pounds, pds_left };
class Stonewt {
 private:
  enum { Lbs_per_stn = 14 };  // pounds per stone
  int stone;                  // whole ones
  double pds_left;            // fractional pounds
  double pounds;              // entire weight in pounds
  Mode mode;
  void show_lbs() const;  // show weight in pounds format
  void show_stn() const;  // show weight in stone format
  void show_pds() const;

 public:
  Stonewt(double lbs);           // constructor for double pounds
  Stonewt(int stn, double lbs);  // constructor for stone, lbs
  Stonewt();                     // default constructor
  void change_mode(const Mode& m) { mode = m; }
  Stonewt operator+(const Stonewt& s) const;
  Stonewt operator-(const Stonewt& s) const;
  Stonewt operator*(const Stonewt& s) const;
  ~Stonewt();
  friend std::ostream& operator<<(std::ostream& os, Stonewt& s);
};
#endif
