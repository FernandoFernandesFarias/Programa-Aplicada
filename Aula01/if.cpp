#include <iostream>
using namespace std;

int main() {
	double n1, n2;
	
	cout << "Digite primeiro num: ";
	cin >> n1;
	cout << "Digite segundo num: ";
	cin >> n2;
	
	if (n1 > n2){
		cout << "O primeiro num e maior: " << n1 << endl;
	}else if (n2 > n1){
		cout << "O segundo num e maior: " << n2 << endl;
	}else {
		cout << "Sao iguais";
	}
	
	return 0;
}
