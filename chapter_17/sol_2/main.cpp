#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  ofstream fout(argv[1]);
  for (char c = cin.get(); c != '$'; c = cin.get()) fout << c;
  fout.close();
  return 0;
}
