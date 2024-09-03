#include <algorithm>  // for std::for_each
#include <iostream>
#include <list>

template <class T>
class TooBig {
 private:
  T cutoff;

 public:
  // Functor class defines operator()
  TooBig(const T& t) : cutoff(t) {}
  bool operator()(const T& v) const { return v > cutoff; }
};

// Helper function for printing elements
// void outint(int n) { std::cout << n << " "; }

int main() {
  using std::cout;
  using std::endl;
  using std::list;

  TooBig<int> f100(100);  // limit 100
  int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

  auto outint = [](int n) { cout << n << " "; };
  list<int> yadayada(vals, vals + 10);  // range constructor
  list<int> etcetera(vals, vals + 10);

  // C++11 can use the following instead:
  // list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
  // list<int> etcetera = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

  cout << "Original lists:\n";
  std::for_each(yadayada.begin(), yadayada.end(), outint);
  cout << endl;
  std::for_each(etcetera.begin(), etcetera.end(), outint);
  cout << endl;

  // Remove elements greater than 100 from yadayada
  yadayada.remove_if([](int x) { return x > 100; });

  // Remove elements greater than 200 from etcetera using a named function
  // object
  etcetera.remove_if([](int x) { return x > 200; });

  cout << "Trimmed lists:\n";
  std::for_each(yadayada.begin(), yadayada.end(), outint);
  cout << endl;
  std::for_each(etcetera.begin(), etcetera.end(), outint);
  cout << endl;

  return 0;
}
