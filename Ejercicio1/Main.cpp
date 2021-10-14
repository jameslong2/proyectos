#include <iostream>
using namespace std;

int main()
{
	char letra;
	float result;
	float a=0;
	float b = 0;
	char operation;
	result = 4.0f * 2.0f * (3.0f - 4.0f) / 3.0f;
	/*//pide por consola
	//std::cin >> letra;es lo mismo que la de abajo
	cin >> letra;
	//imprime un texto y le concateno un enter y una frase
	std::cout << letra << std::endl << "Hello world! patata" << std::endl<<"Adios Mundo";
	cout << result;
	//limpiala pantalla -->System("CLS")*/
	//hola
	//adios
	cout << "Calculadora"<<endl;
	cout << "Escribe el primer valor" << endl;
	cin >> a;
	cout << "Escribe el segundo valor" << endl;
	cin >> b;
	cout << "El primer valor: " << a << " El segundo valor: " << b << endl;
	cout << "Introduce + para sumar, - para restar, * para multiplicar y / para dividir: " << endl;
	cin >> operation;
	switch (operation) {
	case '+':
		cout << "resultado de " << a << " mas " << b << " es igual a "<< a+b;
		break;
	case '-':
		cout << "resultado de " << a << " meno " << b << " es igual a " << a - b;
		break;
	case '*':
		cout << "resultado de " << a << " por " << b << " es igual a " << a * b;
		break;
	case '/':
		cout << "resultado de " << a << " entre " << b << " es igual a " << a / b;
		break;
	}
}