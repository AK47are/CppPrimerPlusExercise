// dma.cpp --dma class methods
#include "dma.h"

#include <cstring>
// baseDMA methods
baseDMA::baseDMA(const char *l, int r) {
  label = new char[std::strlen(l) + 1];
  std::strcpy(label, l);
  rating = r;
}
baseDMA::baseDMA(const baseDMA &rs) {
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
}
baseDMA::~baseDMA() { delete[] label; }
baseDMA &baseDMA::operator=(const baseDMA &rs) {
  if (this == &rs) return *this;
  delete[] label;
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
  return *this;
}
void baseDMA::View() {
  std::cout << "Label: " << label << std::endl;
  std::cout << "Rating: " << rating << std::endl;
}
std::ostream &operator<<(std::ostream &os, const baseDMA &rs) {
  os << "Label: " << rs.label << std::endl;
  os << "Rating: " << rs.rating << std::endl;
  return os;
}
// lacksDMA methods
lacksDMA::lacksDMA(const char *c, const char *l, int r) {
  label = new char[std::strlen(l) + 1];
  std::strcpy(label, l);
  rating = r;
  std::strncpy(color, c, 39);
  color[39] = '\0';
}
lacksDMA::lacksDMA(const char *c, const pureDMA &rs) {
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
  std::strncpy(color, c, COL_LEN - 1);
  color[COL_LEN - 1] = '\0';
}
void lacksDMA::View() {
  std::cout << "Label: " << label << std::endl;
  std::cout << "Rating: " << rating << std::endl;
  std::cout << "Color: " << color << std::endl;
}
std::ostream &operator<<(std::ostream &os, const lacksDMA &ls) {
  os << (const baseDMA &)ls;
  os << "Color: " << ls.color << std::endl;
  return os;
}
// hasDMA methods
hasDMA::hasDMA(const char *s, const char *l, int r) {
  label = new char[std::strlen(l) + 1];
  std::strcpy(label, l);
  rating = r;
  style = new char[std::strlen(s) + 1];
  std::strcpy(style, s);
}
hasDMA::hasDMA(const char *s, const pureDMA &rs) {
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
  style = new char[std::strlen(s) + 1];
  std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA &hs) {
  label = new char[std::strlen(hs.label) + 1];
  std::strcpy(label, hs.label);
  rating = hs.rating;
  style = new char[std::strlen(hs.style) + 1];
  std::strcpy(style, hs.style);
}
hasDMA::~hasDMA() { delete[] style; }
hasDMA &hasDMA::operator=(const hasDMA &hs) {
  if (this == &hs) return *this;
  delete[] label;
  label = new char[std::strlen(hs.label) + 1];
  std::strcpy(label, hs.label);
  rating = hs.rating;
  delete[] style;  // prepare for new style
  style = new char[std::strlen(hs.style) + 1];
  std::strcpy(style, hs.style);
  return *this;
}
void hasDMA::View() {
  std::cout << "Label: " << label << std::endl;
  std::cout << "Rating: " << rating << std::endl;
  std::cout << "Style: " << style << std::endl;
}
std::ostream &operator<<(std::ostream &os, const hasDMA &hs) {
  os << (const baseDMA &)hs;
  os << "Style: " << hs.style << std::endl;
  return os;
}
