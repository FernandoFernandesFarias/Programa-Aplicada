#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Resistor {
private:
    string cores[10] = {"preto", "marrom", "vermelho", "laranja", "amarelo", "verde", "azul", "violeta", "cinza", "branco"};
    int resistoresValor[100]; 
    string resistoresCores[100][3]; 
    string resistoresTipo[100];
    double resistoresPotencia[100]; 
    int contador = 0;

public:
    void adicionarResistor(string cor1, string cor2, string cor3, string tipo, double potencia) {
        int indice1 = encontrarIndiceCor(cor1);
        int indice2 = encontrarIndiceCor(cor2);
        int indice3 = encontrarIndiceCor(cor3);

        if (indice1 != -1 && indice2 != -1 && indice3 != -1) {
            int valor = calcularValor(indice1, indice2, indice3);

            resistoresCores[contador][0] = cor1;
            resistoresCores[contador][1] = cor2;
            resistoresCores[contador][2] = cor3;
            resistoresTipo[contador] = tipo;
            resistoresPotencia[contador] = potencia;
            resistoresValor[contador] = valor;

            contador++; 
        } else {
            cout << "Uma ou mais cores fornecidas sao invalidas." << endl;
        }
    }

    int calcularValor(int indice1, int indice2, int indice3) {
        int valorResistor = (indice1 * 10 + indice2) * pow(10, indice3);
        return valorResistor;
    }

    void exibirInformacoes() {
        for (int i = 0; i < contador; i++) {
            cout << "Codigo de Cores: " << resistoresCores[i][0] << ", " << resistoresCores[i][1] << ", " << resistoresCores[i][2] << endl;
            cout << "Tipo: " << resistoresTipo[i] << endl;
            cout << "Potencia: " << resistoresPotencia[i] << " W" << endl;
            cout << "Valor: " << resistoresValor[i] << " ohms" << endl;
            cout << "----------------------------------------" << endl;
        }
    }

    int encontrarIndiceCor(string cor) {
        for (int i = 0; i < 10; i++) {
            if (cores[i] == cor) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Resistor resistor1;

    resistor1.adicionarResistor("vermelho", "vermelho", "marrom", "Fixo", 0.25);
    resistor1.adicionarResistor("laranja", "laranja", "vermelho", "Variavel", 0.5);
    resistor1.adicionarResistor("marrom", "vermelho", "laranja", "Fixo", 0.5);

    resistor1.exibirInformacoes();

    return 0;
}
