#include <iostream>
using namespace std;

int calcular(int num1, int num2, char operador = '+') {
  switch (operador) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      return num1 / num2;
    default:
      cout << "Operador inválido." << endl;
      return 0;
  }
}

int main() {
    int num1, num2;
    char operador;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite a operacao desejada. Pressione Enter para soma padrao: ";
    cin.ignore();
    operador = cin.get();

    if (operador == '\n') {
        operador = '+';
    }

    // Calcula e exibe o resultado
    int resultado = calcular(num1, num2, operador);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
