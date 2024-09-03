#include <iostream>

using namespace std;

int main() {

  int vetor[10];
  int maior = 0, posicao = 0;

  for (int i = 0; i < 10; i++) {
    cout << "Digite um elemento: ";
    cin >> vetor[i];
  }

  for (int i = 0; i < 10; i++) {
    if (maior < vetor[i]) {
      maior = vetor[i];
      posicao = i;
    }
  }
  
  for (int i = 0; i < 10; i++) {
    cout << vetor[i] << endl;
  }
  cout << "Maior: " << maior << " na posicao: " << posicao << endl;
  return 0;
}