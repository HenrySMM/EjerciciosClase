/*
PERIODO I SEMANA 5
Escriba un programa que pregunte cuántos números se van a introducir, 
pida esos números, y escriba el mayor, el menor y la media aritmética.

Se recuerda que la media aritmética de un conjunto de valores 
es la suma de esos valores dividida por la cantidad de valores.

OBLIGATORIO USAR: ESTRUCTURAS DE REPETICION
*/
#include <iostream>
using namespace std;


int main(){
	
	int repeticiones;
	double numero, mayor = 0, menor = 0, media, suma = 0;
	
	cout << "Introdusca la cantidad de numeros que desea ingresar: ";
	cin >> repeticiones;
	
	for (int i=0; i < repeticiones; i++){
		
		system("cls");
		cout << "Introduzca un numero  (" << i+1 << " / " << repeticiones << ") :";
		cin >> numero;
		
		suma += numero;
		if (i == 0){
			mayor = numero; menor = numero;
		}
		
		if (numero < menor) menor = numero;
		if (numero > mayor) mayor = numero;
		
	}
	
	media = suma/repeticiones;
	
	system("cls");
	cout << "Media: " << media << endl
		 << "------------------------------------------" << endl
		 << "Numero mayor: " << mayor << endl
		 << "Numero menor: " << menor;
		 
	return 0;
}
