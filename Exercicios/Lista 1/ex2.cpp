#include <iostream>
using namespace std;

int main() {
	double altura, largura, comprimento, volume;
	
	cout << "Digite a altura: ";
	cin >> altura;
	cout << "Digite a largura: ";
	cin >> largura;
	cout << "Digite comprimento: ";
	cin >> comprimento;
	
	volume = comprimento * largura * altura;
	
	cout << "O volume e " << volume << endl;
	
	return 0;
}
	

