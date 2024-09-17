#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    double saldo;
    string senha;

public:
    string titular;

    ContaBancaria(string titularInicial, string senhaInicial) {
        titular = titularInicial;
        senha = senhaInicial;
        saldo = 0.0; 
    }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de " << valor << " realizado com sucesso." << endl;
        } else {
            cout << "O valor do deposito deve ser positivo." << endl;
        }
    }

    void sacar(double valor, string senhaTentativa) {
        if (senhaTentativa == senha) {
            if (valor > 0 && saldo >= valor) {
                saldo -= valor;
                cout << "Saque de " << valor << " realizado com sucesso." << endl;
            } else {
                cout << "Saldo insuficiente ou valor de saque invalido." << endl;
            }
        } else {
            cout << "Senha incorreta. Saque nao autorizado." << endl;
        }
    }

    void exibirSaldo(string senhaTentativa) {
        if (senhaTentativa == senha) {
            cout << "Saldo atual: " << saldo << endl;
        } else {
            cout << "Senha incorreta. Nao e possivel exibir o saldo." << endl;
        }
    }
};

int main() {
    ContaBancaria conta("Joao Silva", "1234");

    conta.depositar(500.0);
    conta.exibirSaldo("1234"); 
    conta.sacar(200.0, "1234"); 
    conta.exibirSaldo("1234");

    conta.sacar(100.0, "4321"); 
    conta.exibirSaldo("4321"); 

    return 0;
}
