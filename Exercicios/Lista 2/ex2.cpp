#include <iostream>

using namespace std;

//Prototipação de função

int verificaNumero(int numero);

int main() {

  int numero;
  string resultado;

  cout << "Digite o numero: ";
  cin >> numero;

  resultado = verificaNumero(numero);
  cout << resultado;

  return 0;
}

int verificaNumero(int numero) {
  if (numero >= 0) {
    return 'P';
  } else {
    return 'N';
  }
}
