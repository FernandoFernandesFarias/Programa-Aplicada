#include <iostream>

using namespace std;

int main() {

  int matriz[3][3];

  cout << "Digite os elementos da matriz: ";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  } 

  cout << "===================" << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << (matriz[i][j] *= 5) << " ";
    }
    cout << endl;
  }

  return 0;
}