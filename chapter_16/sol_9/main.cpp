#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <list>
#include <vector>
const int SIZE = 100000;
int main() {
  int init;
  std::vector<int> vi0, vi;
  std::list<int> li0, li;
  for (int i = 0; i < SIZE; ++i) {
    init = rand();
    vi0.push_back(init);
    li0.push_back(init);
    vi.push_back(init);
    li.push_back(init);
  }
  std::cout << vi.size() << " " << li.size() << std::endl;
  std::cout << "Sort vi time:";
  clock_t start = clock();
  std::sort(vi.begin(), vi.end());
  clock_t end = clock();
  std::cout << (double)(end - start) / CLOCKS_PER_SEC << std::endl;
  std::cout << "Sort li time:";
  start = clock();
  li.sort();
  end = clock();
  std::cout << (double)(end - start) / CLOCKS_PER_SEC << std::endl;
  li = li0;
  start = clock();
  int i = 0;
  for (auto pt = li.begin(); pt != li.end(); ++pt) {
    vi[i] = *pt;
    ++i;
  }
  std::sort(vi.begin(), vi.end());
  i = 0;
  for (auto pt = li.begin(); pt != li.end(); ++pt) {
    *pt = vi[i];
    ++i;
  }
  end = clock();
  std::cout << "Using array sort to list time:";
  std::cout << (double)(end - start) / CLOCKS_PER_SEC << std::endl;
}
