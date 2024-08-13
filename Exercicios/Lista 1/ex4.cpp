#include <iostream>
using namespace std;

int main() {
	char letra;
	
	cout << "Digite a letra: ";
	cin >> letra;
	letra = toupper(letra);
	
	
		if (letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra == 'U'){
		cout << letra << " e vogal" << endl;
	}else {
		cout << letra << " nao e vogal" << endl;
	}
	
	return 0;
}
