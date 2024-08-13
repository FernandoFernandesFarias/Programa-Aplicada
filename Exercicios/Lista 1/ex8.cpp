#include <iostream>

using namespace std;

int main(void) {
  double salario, novoSalario, valorAumento;

  cout << "Digite o salario: ";
  cin >> salario;

  if (salario >= 1500) {
    novoSalario = salario + (salario * 0.05);
    valorAumento = novoSalario - salario;

    cout << "Salario: " << salario << endl;
    cout << "Novo Salario: " << novoSalario << endl;
    cout << "Percentual de aumento: 5%" << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else if (salario >= 700) {
    novoSalario = salario + (salario * 0.10);
    valorAumento = novoSalario - salario;
    
    cout << "Salario: " << salario << endl;
    cout << "Novo Salario: " << novoSalario << endl;
    cout << "Percentual de aumento: 10%" << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else if (salario > 280) {
    novoSalario = salario + (salario * 0.15);
    valorAumento = novoSalario - salario;
    
    cout << "Salario: " << salario << endl;
    cout << "Novo Salario: " << novoSalario << endl;
    cout << "Percentual de aumento: 15%" << endl;
    cout << "Valor do aumento: " << valorAumento << endl;

  } else {
    novoSalario = salario + (salario * 0.20);
    valorAumento = novoSalario - salario;
    
    cout << "Salario: " << salario << endl;
    cout << "Novo Salario: " << novoSalario << endl;
    cout << "Percentual de aumento: 20%" << endl;
    cout << "Valor do aumento: " << valorAumento << endl;
  }
}