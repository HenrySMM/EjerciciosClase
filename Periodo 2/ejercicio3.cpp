/*
PERIODO II SEMANA 4
Diseñe un programa que permita obtener la cantidad a pagar por las entradas a un concierto.
Existen entradas VIP que pueden ser identificadas por el código 1 cuyo precio es de $125.
Existen entradas tribuna que pueden ser identificadas por el código 2 cuyo precio es de $40, 
las personas tienen que elegir el tipo de entrada, además si el cliente compra más de 5 entradas VIP tendrán un 20% de descuento.

Mostrar el resultado en el siguiente formato: 
Usted compro XXXXX entradas de tipo “colocar si es tribuna o VIP”
El proceso se repetirá tres veces.

*/

#include <iostream>
using namespace std;

void aviso(){	
	cout << "Valor no valido";
	system("pause"); system("cls");
}

string tipoEntrada(int entrada){
	if (entrada == 1) return "VIP";
	else return "Tribuna";
}

int main(){
	
	int entrada, cantidad;
	const float VIP = 125, TRIBUNA = 50;
	
	for (int i=0; i<3; i++){
		float descuento = 0, costo;
		
		system("cls");
		
		do{	
			cout << "Ingrese el tipo de entrada a comprar: [1. VIP/ 2. Tribuna]" << endl << ">>";
			cin >> entrada;
			if (entrada != 1 && entrada != 2) aviso();
			
			if (entrada == 1) costo = VIP;
			else costo = TRIBUNA;
			
		} while (entrada != 1 && entrada != 2);
		system("cls");
		
		
		do{
			cout << "Ingrese la cantidad de entradas a comprar: " << endl << ">>";
			cin >> cantidad;
			
			if (cantidad > 5) descuento = 0.20;
			if (cantidad < 0) aviso();
			
		} while (cantidad < 0 );
		system("cls");
		
		costo = costo*cantidad;
		costo += costo*descuento;
		
		cout << "Usted compro "<< cantidad << " entradas de tipo " << tipoEntrada(entrada) << endl;
		cout << "$" << costo << endl;
		system("pause");
	}
	
}
