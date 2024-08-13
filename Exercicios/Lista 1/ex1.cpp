#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  double area, raio, pi = M_PI;

  cout << "Digite o raio: ";
  cin >> raio;

  area = (raio * raio) * pi;

  cout << "A area e " << area;
}