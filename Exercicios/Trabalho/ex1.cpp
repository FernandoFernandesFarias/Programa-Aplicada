#include <iostream>
#include <math.h>

using namespace std;

class EquacaoQuadratica {
  private:
    double a_, b_, c_;

  public:
    EquacaoQuadratica(double a, double b, double c);
    double calcularDelta();
    void calcularRaizes();
};

EquacaoQuadratica::EquacaoQuadratica(double a, double b, double c) {
  a_ = a;
  b_ = b;
  c_ = c;
}

double EquacaoQuadratica::calcularDelta() {
  double delta = pow(b_, 2) - 4 * a_ * c_;

  return delta;
}

void EquacaoQuadratica::calcularRaizes() {
  double delta = calcularDelta();

  cout << "Delta: " << delta << endl;


  if (delta < 0) {
    cout << "Raizes nao reais" << endl;
  } else if (delta == 0) {
    double raiz = -b_ / (2 * a_);
    cout << "A equacao possui uma raiz real: " << raiz << endl;
  } else {
    double raiz1 = (-b_ + sqrt(delta)) / (2 * a_);
    double raiz2 = (-b_ - sqrt(delta)) / (2 * a_);
    cout << "A equacao possui duas raizes reais: " << raiz1 << " e " << raiz2 << endl;
  }
}

int main() {

  EquacaoQuadratica conta(1, -6, 9);

  conta.calcularDelta();
  conta.calcularRaizes();

  return 0;
}