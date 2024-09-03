#include <iostream>
#include <stdexcept>
class bad_hmean : public std::logic_error {
 public:
  bad_hmean()
      : logic_error("Error"){};  // logic_error hasn't default constructor
  const char* what() { return "hmean(): a can't equal to -b"; }
};

class bad_gmean : public std::logic_error {
 public:
  bad_gmean() : logic_error("Error"){};
  const char* what() { return "gmean(): argumens should be >= 0\n"; }
};
