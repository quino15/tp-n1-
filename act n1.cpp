#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	int numero1; // Varible Numero 1
	int numero2; // Variable Numero 2
        cout << "Calculadora muy basica"; // Titulo
        cout << endl; // Separacion
	cout << "Este programa suma y mutiplica 2 numeros enteros. " << endl; // Texto explicativo
	cout << endl; // Separacion
	cout << "Ingrese el primer numeros entero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero 1
	cout << endl; // Separacion
	cout << "Ingrese el segundo numero entero:" << endl; // Entrada del segundo numero
	cin >> numero2; // Datos guardado de numero 2
	int resultado = numero1 + numero2; // Resultado en variable
	cout << endl; // Separacion
	cout << "Procedimiento de la suma: " << numero1 << " + " << numero2 << " = " << resultado << endl; // Procedimiento
	cout << "El resultado de la suma es " << resultado << endl; // Resultado
	cout << endl; // Separacion
	return 0;
}