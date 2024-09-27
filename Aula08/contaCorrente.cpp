#include <iostream>

using namespace std;

class ContaBancaria {
  private:
    string titular;
    double saldo;
    double limite;

  public:
    ContaBancaria::ContaBancaria(string titular, double saldo, double limite);
    void exibirInfo();
};

int main() {
  ContaBancaria minhaConta("Fafa", 1000, 8000);
  minhaConta.exibirInfo();

  return 0;
}

void ContaBancaria::exibirInfo() {
  cout << "Titular: " << titular << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "Limite: " << limite << endl;
}