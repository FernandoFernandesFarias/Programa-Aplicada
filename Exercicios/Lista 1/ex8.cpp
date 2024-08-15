#include <iostream>

using namespace std;

void calculaSalario(double salario, double &novoSalario, double &valorAumento, double percentual) {
    novoSalario = salario + (salario * percentual);
    valorAumento = novoSalario - salario;
}

int main() {
  double salario, novoSalario, valorAumento;

  cout << "Digite o salario: ";
  cin >> salario;

  if (salario >= 1500) {
    double percentual = 0.05;
    calculaSalario(salario, novoSalario, valorAumento, percentual);

    cout << "Salario original: " << salario << endl;
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else if (salario >= 700) {
    double percentual = 0.10;
    calculaSalario(salario, novoSalario, valorAumento, percentual);

    cout << "Salario original: " << salario << endl;
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else if (salario > 280) {
    double percentual = 0.15;
    calculaSalario(salario, novoSalario, valorAumento, percentual);

    cout << "Salario original: " << salario << endl;
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else {
    double percentual = 0.20;
    calculaSalario(salario, novoSalario, valorAumento, percentual);

    cout << "Salario original: " << salario << endl;
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Valor do aumento: " << valorAumento << endl;
  }

  return 0;
}