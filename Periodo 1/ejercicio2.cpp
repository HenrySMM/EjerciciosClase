/*
PERIODO I SEMANA 3
Realizar un programa que defina un vector de 10 enteros, 
muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.

OBLIGATORIO USAR: VECTORES
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	const int repeticiones = 10;

	int numeros[10];
	int num, ancho = 10;
	
	for (int i=0; i < repeticiones; i++){
		cout << "Ingrese un numero entero para el elemento: (" << i+1 << "/ 10) del vector\n" << ">>";
		cin >> num;	
		numeros[i] = num;
		system("cls");
	}
	
	cout << setw(ancho) << "NUMERO" << setw(ancho+5) << "CUADRADO" << setw(ancho+7) << "CUBO" << endl;
	cout << "-------------------------------------------" << endl;
	
	for (int element: numeros){
		cout << setw(ancho) << element << setw(ancho+5) << pow(element, 2) << setw(ancho+7) << pow(element, 3) << endl;
	}
}
