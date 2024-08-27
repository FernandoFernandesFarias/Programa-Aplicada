#include <iostream>

using namespace std;

double average(double a, double b, double c) {
  return (a + b + c) / 3; 
}

int average(int a, int b, int c) {
  return (a + b + c) / 3; 
}

int main() {

  cout << average(10.0, 9.4, 8.2);
  cout << average(10, 9, 8);

  return 0;
}