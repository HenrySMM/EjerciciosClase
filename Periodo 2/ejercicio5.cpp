/*
PERIODO II SEMANA 5
Escriba un programa que cuente la cantidad de elementos positivos de un arreglo e imprima dicho valor.

OBLIGATORIO USAR: ARREGLOS
*/

#include <iostream>
#include <vector>
using namespace std;

void visualizar_Arreglo(vector <int> arreglo){
	
	cout << "[";
	int elementosImpresos = 0;
		
		for (int elemento:arreglo){
			cout << elemento << ", ";
			if (elementosImpresos%10 == 0 && elementosImpresos != 0) cout << endl;
			
			elementosImpresos++;
		}
		
	cout << "]"<< endl;
	cout << "----------------------------------------------" << endl;
	
}

int main(){
	
	vector <int> numeros;
	int repeticiones = 1, numero;
	string input;
	
	int numerosPositivos = 0, numerosNegativos = 0;
	
	while (true){
		
		system("cls");
		
		visualizar_Arreglo(numeros);
		
		cout << "<Para detenerse ingresar 'stop'>" << endl;
		cout << "Ingrese un numero para el arreglo ( " << repeticiones << " / ? ) :" << endl << ">>";
		cin >> input;
		
		if (input == "stop") break;
		
		numero = stoi(input);
		
		numeros.push_back(numero);
		repeticiones++;
		
	}
	
	system("cls");
	for(int numero:numeros){
		if (numero < 0) numerosNegativos++;
		if (numero > 0) numerosPositivos++;
	}
	
	visualizar_Arreglo(numeros);
	cout << endl << "Numeros Positivos: " << numerosPositivos;
	cout << endl << "Numeros Negativos: " << numerosNegativos;
	
}
