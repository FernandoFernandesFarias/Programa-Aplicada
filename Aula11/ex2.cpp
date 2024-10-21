#include <iostream>
using namespace std;

class Conta {
protected:
    double saldo;

public:
    Conta(double saldoInicial) : saldo(saldoInicial) {}

    void depositar(double valor) {
        saldo += valor;
        cout << "Deposito de " << valor << " realizado. Saldo atual: " << saldo << endl;
    }

    virtual void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque de " << valor << " realizado. Saldo atual: " << saldo << endl;
        } else {
            cout << "Saldo insuficiente. Saque nao realizado." << endl;
        }
    }

    double getSaldo() const {
        return saldo;
    }
};

class ContaCorrente : public Conta {
private:
    double taxaSaque;

public:
    ContaCorrente(double saldoInicial, double taxa) : Conta(saldoInicial), taxaSaque(taxa) {}

    void sacar(double valor) override {
        double valorTotal = valor + taxaSaque;
        if (valorTotal <= saldo) {
            saldo -= valorTotal;
            cout << "Saque de " << valor << " realizado com taxa de " << taxaSaque << ". Saldo atual: " << saldo << endl;
        } else {
            cout << "Saldo insuficiente para o saque com taxa. Saque nao realizado." << endl;
        }
    }
};

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(double saldoInicial) : Conta(saldoInicial) {}

    void sacar(double valor) override {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque de " << valor << " realizado. Saldo atual: " << saldo << endl;
        } else {
            cout << "Saldo insuficiente. Saque nao realizado." << endl;
        }
    }
};

int main() {

    ContaCorrente cc(1000, 5); 
    ContaPoupanca cp(500);     

    cout << "--- Conta Corrente ---" << endl;
    cc.depositar(200);
    cc.sacar(300);
    cc.sacar(950);  

    cout << "--- Conta Poupanca ---" << endl;
    cp.depositar(150);
    cp.sacar(100);
    cp.sacar(600); 

    return 0;
}
