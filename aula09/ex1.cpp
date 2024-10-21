#include <iostream>

using namespace std;

class Complexo {
  public:
    double real, imaginario;
    Complexo(double r, double i);
    void getComplexo();
    Complexo operator+ (Complexo );
};

Complexo Complexo::operator+ (Complexo n) {
  real = real + n.real;
  imaginario = imaginario + n.imaginario;

  return Complexo(real, imaginario);
}

Complexo::Complexo(double r, double i) {
  real = r;
  imaginario = i;
}

void Complexo::getComplexo() {
  cout << real << " + " <<  imaginario << "i" << endl;
}

int main() {
  double real1, real2, imaginario1, imaginario2;

  cout << "Digite o x1: ";
  cin >> real1;
  cout << "Digite o y1: ";
  cin >> imaginario1;

  cout << "Digite o x2: ";
  cin >> real2;
  cout << "Digite o y2: ";
  cin >> imaginario2;


  Complexo n1(real1, imaginario1), n2(real2, imaginario2);
  Complexo n3 = n1 + n2;

  n3.getComplexo();

  return 0;
}