#include <iostream>

using namespace std;

int main() {

  int a[6] = {1, 0, 5, -2, -5, 7};
  int soma = 0;

  soma = a[0] + a[1] + a[5];

  a[4] = 100;

  for (int i = 0; i < 6; i++) {
    cout << a[i] << endl;
  }

  cout << "=========" << endl;
  cout << "Soma: " << soma;
  return 0;
}