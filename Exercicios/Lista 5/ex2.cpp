#include <iostream>
using namespace std;

class Retangulo {
  private:
    double largura;
    double altura;

  public:
    void setDados(double larguraRetangulo, double alturaRetangulo);
    double calculaArea();
    double calculaPerimetro();
    void exibirDados();
};

int main() {
  Retangulo retangulo1;

  retangulo1.setDados(5, 5);
  retangulo1.exibirDados();

  return 0;
}

void Retangulo::setDados(double larguraRetangulo, double alturaRetangulo) {
  largura = larguraRetangulo;
  altura = alturaRetangulo;
}

double Retangulo::calculaArea() {
  return largura * altura;
}

double Retangulo::calculaPerimetro() {
  return 2 * (largura + altura);
}

void Retangulo::exibirDados() {
  cout << "Area: " << calculaArea() << ", Perimetro: " << calculaPerimetro() << endl;
}