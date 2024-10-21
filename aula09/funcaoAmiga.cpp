#include <iostream>

using namespace std;

class Caixa {
  private:
    double largura, altura, profundidade;

  public:
    Caixa(double l, double a , double p) : largura(l), altura(a), profundidade(p) {}
    friend double calcularVolume(Caixa c);
};

double calcularVolume(Caixa c) {
  return c.largura * c.altura * c.profundidade;
}

int main() {
  Caixa caixa(5.0, 4.0, 3.0);

  cout << "Volume da caixa: " << calcularVolume(caixa) << endl;

  return 0;
}