#include <iostream>

using namespace std;

//Prototipação de função

float paraFahrenheit(float celsius);
float paraKelvin(float celsius);

int main() {

  float celsius, fahrenheit, kelvin;

  cout << "Digite a temperatura em Celsius: ";
  cin >> celsius;

  fahrenheit = paraFahrenheit(celsius);
  kelvin = paraKelvin(celsius);

  cout << "Temperatura em celsius: " << celsius << endl;
  cout << "Temperatura em fahrenheit: " << fahrenheit << endl;
  cout << "Temperatura em kelvin: " << kelvin << endl;

  return 0;
}

float paraFahrenheit(float celsius) {
  float fahrenheit = (celsius * 1.8) + 32;
  return fahrenheit;
}

float paraKelvin(float celsius) {
  float kelvin = celsius + 273;
  return kelvin;
}
