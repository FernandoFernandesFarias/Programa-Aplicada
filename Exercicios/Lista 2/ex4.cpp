#include <iostream>

using namespace std;

//Protipação de função
double sacar(double saque, double saldo, double saqueMaximo);

int main() {

  double saldo, limite, saqueMaximo, saque, resultado;

  cout << "Digite o saldo da conta: ";
  cin >> saldo;
  cout << "Digite o limite da conta: ";
  cin >> limite;
  cout << "Quanto voce quer sacar? ";
  cin >> saque;

  saqueMaximo = saldo + limite;

  resultado = sacar(saque, saldo, saqueMaximo);

  cout << resultado;

  return 0;
}

double sacar(double saque, double saldo, double saqueMaximo) {
  if (saque > saqueMaximo) {
    cout << "Saque negado. Valor acima do limite permitido ";
    return saque;
  } else {
    double novoSaldo = saldo - saque;
    cout << "Novo saldo: ";
    return novoSaldo;
  }
}