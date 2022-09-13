/*
PERIODO II SEMANA 5
Crear una función que permita leer el valor correspondiente a una distancia en kilómetros y las visualice expresadas en metros.
*/

#include <iostream>
using namespace std;

int main(){

	float kilometros, metros;
	
	cout << "Ingrese la distancia en km: ";
	cin >> kilometros;
	
	if (kilometros < 0) kilometros *= (-1);
	
	system("cls");
	
	metros = kilometros * 1000;
	
	cout << "Distancia ingresada:  " << kilometros << " km" << endl;
	cout << "Conversion en metros: " << metros << " m";
}
