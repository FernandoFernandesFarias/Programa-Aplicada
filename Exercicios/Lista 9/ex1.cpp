#include <iostream>
#include <string>

using namespace std;

class ContaCorrente {
  private:
    string titular_;
    double saldo_;
    double limite_;

  public:
    ContaCorrente(string titular, double saldo, double limite);
    void exibirInfo();
    bool validarSaque(double valor);
    void saque(double valor);
};

ContaCorrente::ContaCorrente(string titular, double saldo, double limite) {
  titular_ = titular;
  
  saldo_ = saldo;
  limite_ = limite;
}

void ContaCorrente::exibirInfo() {
  cout << "Titular: " << titular_ << endl;
  cout << "Saldo: " << saldo_ << endl;
  cout << "Limite: " << limite_ << endl;
}

bool ContaCorrente::validarSaque(double valor) {
  return (saldo_ + limite_ >= valor);
}

void ContaCorrente::saque(double valor) {
  if (validarSaque(valor)) {
    saldo_ -= valor;
    cout << "Saque de " << valor << " realizado com sucesso." << endl;
  } else {
    cout << "Saldo insuficiente para saque." << endl;
  }
}

int main() {
  ContaCorrente minhaConta("Lucas", 1000, 8000);
  minhaConta.exibirInfo();

  minhaConta.saque(500);
  minhaConta.exibirInfo();

  minhaConta.saque(9000);
  minhaConta.exibirInfo();

  cout << endl;

  ContaCorrente minhaConta2("Jorge", 300, 2000);
  minhaConta2.exibirInfo();

  minhaConta2.saque(3000);
  minhaConta2.exibirInfo();

  minhaConta2.saque(100);
  minhaConta2.exibirInfo();

  return 0;
}