#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double n1, n2;

  cout << "Digite o primeiro numero: ";
  cin >> n1;
  cout << "Digite o segundo numero: ";
  cin >> n2;

  double raiz1 = sqrt(n1);
  double raiz2 = sqrt(n2);

  double potencia1 = pow(n1, n2);
  double potencia2 = pow(n2, n1);

  cout << "Raiz 1: " << raiz1 << endl;
  cout << "Raiz 2: " << raiz2 << endl;
  cout << "Potencia 1: " << potencia1 << endl;
  cout << "Potencia 1: " << potencia2 << endl;

  return 0;
}