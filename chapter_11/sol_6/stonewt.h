// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt {
 private:
  enum { Lbs_per_stn = 14 };  // pounds per stone
  int stone;                  // whole stones
  double pds_left;            // fractional pounds
  double pounds;              // entire weight in pounds
 public:
  Stonewt(double lbs);           // constructor for double pounds
  Stonewt(int stn, double lbs);  // constructor for stone, lbs
  Stonewt();                     // default constructor
  void set_stone(const int& stn) {
    stone = stn;  // integer division
    pds_left = stn * Lbs_per_stn;
    pounds = pds_left;
  }
  ~Stonewt();
  void show_lbs() const;  // show weight in pounds format
  void show_stn() const;  // show weight in stone format
  bool operator==(const Stonewt& s) const { return (stone == s.stone); }
  bool operator!=(const Stonewt& s) const { return (stone != s.stone); }
  bool operator<=(const Stonewt& s) const { return (stone <= s.stone); }
  bool operator>=(const Stonewt& s) const { return (stone >= s.stone); }
  bool operator<(const Stonewt& s) const { return (stone < s.stone); }
  bool operator>(const Stonewt& s) const { return (stone > s.stone); }
};
#endif
