#include <iostream>

using namespace std;

double saqueMaximo, saldo;

// Protótipo de função
double sacar(double saque);
bool validarSaque(double saque);

int main() {

  double limite, saque, resultado;

  cout << "Digite o saldo da conta: ";
  cin >> saldo;  
  cout << "Digite o limite da conta: ";
  cin >> limite;
  cout << "Quanto voce quer sacar? ";
  cin >> saque;

  saqueMaximo = saldo + limite;

  if (validarSaque(saque)) {
    resultado = sacar(saque);
    cout << "Saque realizado com sucesso! Novo saldo: " << resultado << endl;
  } else {
    cout << "Saque negado. Valor acima do limite permitido." << endl;
  }

  return 0;
}

bool validarSaque(double saque){
  if (saque > saqueMaximo) {
    return false;
  } else {
    return true;
  }
}

double sacar(double saque) {
  saldo -= saque;
  return saldo;
}
