#include <iostream>

using namespace std;

int main() {

  int matriz[3][3], transposta[3][3];

  cout << "Digite os elementos da matriz: ";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) { 
      transposta[j][i] = matriz[i][j];
    }
  }

  cout << "Matriz: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) { 
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  cout << "Matriz transposta: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) { 
      cout << transposta[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}