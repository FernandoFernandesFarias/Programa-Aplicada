#include <iostream>
int main(){
	float num1, num2;
	std::cout << "Type the first number: "; 
	std::cin >> num1;
	std::cout << "Type the second number: "; 
	std::cin >> num2;
	float sum = num1+num2;
	float sub = num1-num2;
	float mul = num1*num2;
	float div = num1/num2;
	std::cout << "sum: " << sum << std::endl;
	std::cout << "subtract: " << sub << std::endl;
	std::cout << "multiplication: " << mul << std::endl;
	std::cout << "division: " << div << std::endl;
	
}
