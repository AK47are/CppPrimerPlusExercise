#ifndef DMA_H_
#define DMA_H_
#include <iostream>
// Base Class Using DMA
class pureDMA {
 public:
  char* label;
  int rating;

 public:
  virtual ~pureDMA(){};
  virtual void View() = 0;
};
class baseDMA : public pureDMA {
 public:
  baseDMA(const char* l = "null", int r = 0);
  baseDMA(const baseDMA& rs);
  virtual ~baseDMA();
  baseDMA& operator=(const baseDMA& rs);
  void View();
  friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};
// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public pureDMA {
 private:
  enum { COL_LEN = 40 };
  char color[COL_LEN];

 public:
  lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
  lacksDMA(const char* c, const pureDMA& rs);
  friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
  void View();
};
// derived class with DMA
class hasDMA : public pureDMA {
 private:
  char* style;

 public:
  hasDMA(const char* s = "none", const char* l = "null", int r = 0);
  hasDMA(const char* s, const pureDMA& rs);
  hasDMA(const hasDMA& hs);
  ~hasDMA();
  hasDMA& operator=(const hasDMA& rs);
  friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
  void View();
};
#endif
