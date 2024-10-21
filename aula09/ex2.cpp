#include <iostream> 

using namespace std;

class Retangulo {
  private:
    double comprimento, largura;

  public:
    Retangulo(double c, double l) : largura(l), comprimento(c) {}
    friend double calcularArea(Retangulo r);
    friend double calcularPerimetro(Retangulo r);
};

double calcularArea(Retangulo r) {
  return r.comprimento * r.largura;
}

double calcularPerimetro(Retangulo r) {
  return (r.comprimento + r.largura) * 2;
}

int main() {

  Retangulo retangulo(5.0, 2.0);

  cout << "Area: " << calcularArea(retangulo) << endl;
  cout << "Perimetro: " << calcularPerimetro(retangulo);

  return 0;
}