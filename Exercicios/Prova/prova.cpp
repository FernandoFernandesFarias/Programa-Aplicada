#include <iostream>

using namespace std;

double consumoEletrico(double tempo, double potencia) {
  return (tempo * potencia) / 1000;
}

double custo(double consumoMensal, double tempo, double potencia) {
  double consumo = consumoEletrico(tempo, potencia);

  if (consumoMensal <= 30) {
    return consumo * 0.11;
  } else if (consumoMensal <= 100) {
    return consumo * 0.20;
  } else if (consumoMensal <= 220) {
    return consumo * 0.30;
  } else {
    return consumo * 0.33;
  }

}

int main() {

  double tempo, potencia, consumoMensal;

  cout << "Digite o tempo que o aparelho permanece ligado: ";
  cin >> tempo;
  cout << "Digite a potencia do aparelho: ";
  cin >> potencia;
  cout << "Digite a previsao de seu consumo mensal: ";
  cin >> consumoMensal;

  cout << "Consumo do aparelho: " << consumoEletrico(tempo, potencia) << " KWh" << endl;
  cout << "Custo do consumo do aparelho: " << custo(consumoMensal, tempo, potencia) << " reais";

  return 0;
}