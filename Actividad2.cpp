
#include <iostream>

int main(){
	float num1, num2;

std::cout << "Escribe el primer numero: ";
std::cin >> num1;

std::cout << "Escribe el segundo numero: ";
std::cin >> num2;

float suma = num1 + num2;
float resta = num1 - num2;
float multi = num1 * num2;
float division = num1 / num2;

std::cout << "La suma es: " << suma << std::endl;
std::cout << "La resta es: " << resta << std::endl;
std::cout << "La multiplicacion es: " << multi << std::endl;
std::cout << "La division es: " << division << std::endl;

return 0;
	} 