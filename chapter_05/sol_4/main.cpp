#include <iostream>
int main() {
  const float Dap_interest = 0.1;
  const float Cle_interest = 0.05;
  const float raw_deposit = 100;
  int year = 0;
  float Dap_deposit = raw_deposit, Cle_deposit = raw_deposit;
  do {
    ++year;
    Dap_deposit += Dap_interest * raw_deposit;
    Cle_deposit += Cle_deposit * 0.05;
  } while (Cle_deposit <= Dap_deposit);
  std::cout << "year: " << year << "\nDap_deposit: " << Dap_deposit
            << "\nCle_deposit: " << Cle_deposit << std::endl;
}
