#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
void ShowStr(const std::string& Str) { std::cout << Str << std::endl; }
class Store {
 private:
  std::ofstream& fout;

 public:
  Store(std::ofstream& fout_) : fout(fout_) {}
  void operator()(const std::string& str) {
    std::size_t len = str.size();
    // write n int bits;
    fout.write((char*)&len, sizeof(std::size_t)).write(str.data(), len);
  }
};

void GetStrs(std::ifstream& fin, std::vector<std::string>& vistr) {
  std::size_t len;  // 最好和写入的类型相同，否则会出现段错误，排查了半天
  while (fin.read((char*)&len, sizeof(std::size_t))) {
    // sizeof return data type bytes.
    // read n byte.
    char* temp = new char[len];
    // Note: read don't create new memory space, you need create self.
    fin.read(temp, len);
    // std::cout << len << std::endl;
    // std::cout << (std::string)temp << std::endl;
    // temp[len] = '\0';  // string initialize need use \0.
    vistr.push_back(temp);
    delete[] temp;
  }
}

int main() {
  using namespace std;
  vector<string> vostr;
  string temp;

  cout << "Enter strings (empty line to quit):\n";
  while (getline(cin, temp) && temp[0] != '\0') vostr.push_back(temp);
  cout << "Here is your input.\n";
  for_each(vostr.begin(), vostr.end(), ShowStr);

  ofstream fout("strings.dat", ios_base::out | ios_base::binary);
  for_each(vostr.begin(), vostr.end(), Store(fout));
  // 很巧妙，for_each使用的实际上是Store类的()重载函数，以后传递多个参数就可以这样用，也可以用lambda
  fout.close();

  vector<string> vistr;
  ifstream fin("strings.dat", ios_base::in | ios_base::binary);
  if (!fin.is_open()) {
    cerr << "Could not open file for input.\n";
    exit(EXIT_FAILURE);
  }
  GetStrs(fin, vistr);
  cout << "\nHere are the strings read from the file:\n";
  for_each(vistr.begin(), vistr.end(), ShowStr);
  return 0;
}
