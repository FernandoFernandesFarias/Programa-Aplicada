#include <iostream>

using namespace std;

int main() {

  int numeros[5];
  int soma = 0;
  float media = 0;

  for (int i = 0; i < 5; i++) {
    cout << "Digite um numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < 5; i++) {
    soma += numeros[i];
  }
  media = soma / 5;


  cout << "A soma e: " << soma << endl << "Media: " << media;
  return 0;
}