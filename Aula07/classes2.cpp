#include <iostream>

using namespace std;

class Carro {
  private:
    string marca;
    string modelo;
    int ano;

  public:
    void exibirInfo();
    void setDados(string m1, string m2, int a);
};

int main() {
  Carro meuCarro;
  Carro meuCarroNovo;

  meuCarro.setDados("FIAT", "147", 1984);
  meuCarro.exibirInfo();

  meuCarroNovo.setDados("Honda", "Civic", 2021);
  meuCarroNovo.exibirInfo();

  return 0;
}

void Carro::exibirInfo() {
  cout << "Marca: " << marca << ", Modelo: " << modelo << ", Ano: " << ano << endl;
}

void Carro::setDados(string m1, string m2, int a) {
  marca = m1;
  modelo = m2;
  ano = a;
}