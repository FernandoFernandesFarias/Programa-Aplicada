# include <iostream>

using namespace std;

int trocar(int &num1, int &num2) {
    int auxiliar = num1;
    num1 = num2;
    num2 = auxiliar;
}

int main() {

  int num1, num2;

  cout << "Digite num 1: ";
  cin >> num1;
  cout << "Digite num 2: ";
  cin >> num2;

  trocar(num1, num2);

  cout << "num1: " << num1 << " | num2: " << num2;

  return 0;
}