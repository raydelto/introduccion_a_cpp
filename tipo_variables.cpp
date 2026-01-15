
#include <iostream>

using namespace std;

int sumar(int , int);

int main()
{
	// Enteros
	unsigned short corto; // 0 hasta 65536
	int enero; 
	long enteroLargo;

	// Reales
	float precisionSimple;
	double doblePrecision;

	// Caractereres
	char caracter;
	string cadena;

	int enteros[] = {1, 2, 4};

	for(int x: enteros)
	{
		cout << x << endl;
	}
	
	
	int tamano = sizeof(enteros) / sizeof(int);
	cout << "El tamaño del arreglo es " << tamano << endl;

	for(int i = 0; i < 10; i++)
	{
		cout << enteros[i] << endl;
	}

	
	cout << sumar(2,5) << endl;

}


int sumar(int primerNumero, int segundoNumero)
{
	return primerNumero + segundoNumero;
}
