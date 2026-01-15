#include <iostream>

int main()
{
	int primerNumero;
	int segundoNumero;
	std::cout << "Introduzca primer número: " << std::endl;
	std::cin >> primerNumero;
	std::cout << "Introduzca segundo número: " << std::endl;
	std::cin >> segundoNumero;
	int resultado = primerNumero + segundoNumero;
	std::cout << "La sumatoria de " << primerNumero << " + " << segundoNumero << " es " << resultado << std::endl;
	return 0;
}

