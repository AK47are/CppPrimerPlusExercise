// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
  stone = int(lbs) / Lbs_per_stn;  // integer division
  pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
  mode = Mode::stone;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn + lbs;
  mode = Mode::stone;
}
Stonewt::Stonewt()  // default constructor, wt = 0
{
  stone = pounds = pds_left = 0;
  mode = Mode::stone;
}
Stonewt::~Stonewt(){};  // destructor
                        // show weight in stones
void Stonewt::show_stn() const { cout << stone << " stone\n"; }
void Stonewt::show_lbs() const { cout << pounds << " pounds\n"; }
void Stonewt::show_pds() const { cout << pds_left << " pds_left\n"; }
std::ostream& operator<<(std::ostream& os, Stonewt& s) {
  if (s.mode == Mode::stone) s.show_stn();
  if (s.mode == Mode::pounds) s.show_lbs();
  if (s.mode == Mode::pds_left) s.show_pds();
  return os;
}
Stonewt Stonewt::operator+(const Stonewt& s) const {
  return Stonewt(stone + s.stone, pds_left + s.pds_left);
}
Stonewt Stonewt::operator-(const Stonewt& s) const {
  return Stonewt(stone - s.stone, pds_left - s.pds_left);
}
Stonewt Stonewt::operator*(const Stonewt& s) const {
  return Stonewt(stone * s.stone, pds_left * s.pds_left);
}
