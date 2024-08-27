# include <iostream>

using namespace std;

float calculaArea(int raio) {
  return 3.1415 * (raio * raio);  
}

int calculaArea(int base, int altura) {
  return base * altura;  
}

double calculaArea(double base, double altura) {
  return (base * altura) / 2;  
}

int main() {

  cout << "Area do circulo: " << calculaArea(7) << endl;
  cout << "Area do retangulo: " << calculaArea(5, 2) << endl;
  cout << "Area do triangulo: " << calculaArea(10.0, 2.0) << endl;

  return 0;
}