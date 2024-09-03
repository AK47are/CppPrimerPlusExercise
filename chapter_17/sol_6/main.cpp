#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "emp.h"
int Read_File(abstr_emp* pc[]);
void Write_File(abstr_emp* pc[], int count);
int Create_Object(abstr_emp* pc[], int count);
void Display(abstr_emp* pc[], int count);

int main(void) {
  const int MAX = 10;
  abstr_emp* pc[MAX];
  int count = 0;
  count = Read_File(pc);
  count = Create_Object(pc, count);
  Write_File(pc, count);
  cin.get();
  Display(pc, count);
  return 0;
}

int Create_Object(abstr_emp* pc[], int count) {
  for (char c; c != 'q';) {
    cout << "e(mployee)" << endl;
    cout << "m(anager)" << endl;
    cout << "f(ink)" << endl;
    cout << "h(ighfink)" << endl;
    cout << "q(uit)" << endl;
    cout << "你的选择：";
    cin >> c;
    cin.ignore();
    if (count < 10) {
      switch (c) {
        case 'e':
          pc[count] = new employee();
          pc[count]->SetAll();
          ++count;
          break;
        case 'm':
          pc[count] = new manager();
          pc[count]->SetAll();
          ++count;
          break;
        case 'f':
          pc[count] = new fink();
          pc[count]->SetAll();
          ++count;
          break;
        case 'h':
          pc[count] = new highfink();
          pc[count]->SetAll();
          ++count;
          break;
      }
    } else {
      cout << "The object is enough!" << endl;
      break;
    }
  }
  return count;
}

void Write_File(abstr_emp* pc[], int count) {
  ofstream fout("data.txt");
  cout << "Quit the procedure." << endl;
  cout << "Saving the object to data.txt" << endl;
  abstr_emp* cur;
  for (int i = 0; i < count; ++i) {
    cur = pc[i];
    cur->WriteAll(fout);
    fout << endl;
  }
  fout.clear();
  fout.close();
}

int Read_File(abstr_emp* pc[]) {
  ifstream fin("data.txt");
  int count = 0;
  int flag;
  string temp;
  while (!fin.eof()) {
    fin >> flag;
    // cout << flag << endl;
    if (count < 10) {
      switch (flag) {
        case 1:
          pc[count] = new employee();
          pc[count]->getall(fin);
          ++count;
          break;
        case 2:
          pc[count] = new employee();
          pc[count]->getall(fin);
          ++count;
          break;
        case 3:
          pc[count] = new employee();
          pc[count]->getall(fin);
          ++count;
          break;
        case 4:
          pc[count] = new employee();
          pc[count]->getall(fin);
          ++count;
          break;
      }
    }
    flag = 0;
  }
  return count;
}

void Display(abstr_emp* pc[], int count) {
  string temp;
  cout << "All data is displayed:" << endl;
  for (int i = 0; i < count; ++i) pc[i]->ShowAll();
  cout << endl;
}
