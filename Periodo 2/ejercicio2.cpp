/*
PERIODO II SEMANA 2
Hacer un programa en C++ que llene un array de 100 enteros de la siguiente manera:

1) 50 números pares.
2) 50 números impares.

Luego, mostrarlos por pantalla.

OBLIGATORIO USAR: ARREGLOS
*/

#include <iostream>
using namespace std;

int main(){
	
	int opcion, numeros[50], numeroInicial;
	
	do {
		cout << "Que conjunto desea imprimir? \n1.Numeros pares \n2.Numeros impares" << endl;
		cin >> opcion;
	
		switch (opcion){
			case 1: 
				numeroInicial = 0; 
				break;
			case 2: 
				numeroInicial = 1; 
				break;
			
			default:
				cout << "valor no valido";
				system("pause");
		}
		
		system("cls");
	} while (opcion != 1 && opcion != 2);
	
	
	for (int i=1; i <= 50; i++){
		cout << numeroInicial + (i*2);
	
		if(i != 50) cout << ", ";
		if (i%10 == 0) cout << endl;
		
	}
	
}
