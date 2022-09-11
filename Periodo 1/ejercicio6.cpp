/*
PERIODO I SEMANA 4
Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Crear un programa que pida ingresar por teclado la cantidad de piezas 
a procesar y luego ingrese la longitud de cada perfil. 

Sabiendo que la pieza cuya longitud esté comprendida 
en el rango de 1 y 5 son aptas. 

Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.

OBLIGATORIO USAR: ESTRUCTURA WHILE/ DO WHILE
*/

#include <iostream>
using namespace std;

int main(){
	
	int lote, piezasAptas = 0, longitud, revisiones = 0;
	const int maximo = 5, minimo = 1;
	
	cout << "Cuantas piezas desea revisar?" << endl << ">>";
	cin >> lote;
	
	system("cls");
	
	while (revisiones < lote){
		
		cout << "Ingrese la longitud de la pieza (" << revisiones+1 << " / " << lote << "): ";
		cin >> longitud;
	
		if (longitud >= minimo && longitud <= maximo) piezasAptas++;
		revisiones++;
		system("cls");
	}
	
	cout << "Piezas Aptas en el Lote: " << piezasAptas;
	return 0;
}

