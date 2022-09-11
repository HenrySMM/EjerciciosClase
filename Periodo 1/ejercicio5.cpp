/*
PERIODO I SEMANA 4
Escribir un programa que solicite la carga de un valor positivo 
y nos muestre desde 1 hasta el valor ingresado de uno en uno.

OBLIGATORIO USAR: ESTRUCTURA WHILE
*/

#include <iostream>
using namespace std;

int main(){
	
	int meta, contador = 1, limiteDeLinea = 5;
	
	cout << "Ingrese por favor un numero positivo: ";
	cin >> meta;
	cout << "----------------------------------------------------" << endl;
	
	if(meta<0) meta *= -1;
	if(meta > 10) limiteDeLinea = 10;
	if (meta > 100) limiteDeLinea = 20;
	while (contador <= meta){
		
		if (contador < 10) cout << " ";
		cout << contador;
		if (contador < meta) cout << ", ";		
		if (contador%limiteDeLinea == 0) cout << endl;
		contador++;
	}
}
