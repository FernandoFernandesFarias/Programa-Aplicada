#include <iostream>
#include <string>
using namespace std;

class Funcionario {
public:
    string nome;
    double salarioBase;

    Funcionario(string n, double s) : nome(n), salarioBase(s) {}

    virtual double calcularSalarioFinal() {
        return salarioBase;
    }
};

class FuncionarioComissionado : public Funcionario {
public:
    double comissao;

    FuncionarioComissionado(string n, double s, double c) : Funcionario(n, s), comissao(c) {}

    double calcularSalarioFinal() override {
        return salarioBase + comissao;
    }
};

class FuncionarioHorista : public Funcionario {
public:
    double horasTrabalhadas, valorHora;

    FuncionarioHorista(string n, double s, double h, double v) : Funcionario(n, s), horasTrabalhadas(h), valorHora(v) {}

    double calcularSalarioFinal() override {
        return salarioBase + (horasTrabalhadas * valorHora);
    }
};

int main() {

    Funcionario f1("Marcos", 3000);
    FuncionarioComissionado f2("Ana", 2000, 500);
    FuncionarioHorista f3("Joao", 1500, 40, 50);

    cout << f1.nome << " - Salario Final: " << f1.calcularSalarioFinal() << endl;
    cout << f2.nome << " - Salario Final: " << f2.calcularSalarioFinal() << endl;
    cout << f3.nome << " - Salario Final: " << f3.calcularSalarioFinal() << endl;

    return 0;
}
