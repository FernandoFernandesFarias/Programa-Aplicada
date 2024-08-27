#include <iostream>

using namespace std;

float average(float a, float b, float c) {
  return (a + b + c) / 3; 
}

float average(float a, float b, float c, float d) {
  return (a + b + c + d) / 4; 
}

int main() {

  cout << "Media de 3 numeros: " << average(10, 9, 8);
  cout << "Media de 4 numeros: " << average(10, 9, 8, 7);

  return 0;
}