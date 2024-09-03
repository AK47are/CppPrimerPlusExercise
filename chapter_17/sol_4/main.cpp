#include <fstream>
#include <iostream>
#include <string>
int main() {
  const std::string input_file[]{"input1.txt", "input2.txt"};
  std::ifstream fin1(input_file[0]), fin2(input_file[1]);
  std::ofstream fout("output.txt");
  std::string line1, line2;
  if (!fin1.is_open() || !fin2.is_open()) {
    std::cout << "The file can't open!" << std::endl;
    return 0;
  }
  while (true) {
    // std::cout << fin1.eof() << " " << fin2.eof() << std::endl;
    if (fin1.eof() && fin2.eof()) break;
    if (!fin1.eof() && !fin2.eof()) {
      getline(fin1, line1);
      getline(fin2, line2);
      fout << line1 << line2 << std::endl;
    } else if (!fin1.eof()) {
      getline(fin1, line1);
      fout << line1 << std::endl;
    } else {
      getline(fin2, line2);
      fout << line2 << std::endl;
    }
  }
  return 1;
}
