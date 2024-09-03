#include <iostream>

using namespace std;

int main() {

  int matriz[3][3];
  int soma[3] = {0, 0, 0};

  cout << "Digite os elementos da matriz: ";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  } 

  cout << "===================" << endl;

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      soma[j] += matriz[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << soma[i] << " ";
  }
  cout << endl;
  return 0;
}