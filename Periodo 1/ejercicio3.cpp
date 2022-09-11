/*
PERIODO I SEMANA 6
Utilizando arreglos proceda a resolver el siguiente problema.
Definir un arreglo de N componentes de tipo double que representen las alturas de 5 personas.
Se pide obtener el promedio de las mismas.
Contar cuántas personas son más altas que el promedio y cuántas más bajas.
El valor mayor para la altura.
El valor menor para la altura.

OBLIGATORIO USAR: ARREGLOS / ESTRUCTURA FOR
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	const int personas = 5;
	double listaAlturas[personas];
	double altura, mayorAltura = 0, menorAltura = 0, sumaAlturas, alturaPromedio;
	
	for (int i=0; i < personas; i++){
		
		do {
			
			cout << "Ingrese la altura de la persona #" << i+1 << ":" << endl << ">>";
			cin >> altura;
			
			if (altura <= 0 || altura > 3){
				cout << "La altura ingresada no es valida" << endl;
				system("pause");
			}
			
			system("cls");
		} while (altura <= 0 || altura > 3);
		
		
		listaAlturas[i] = altura;
		sumaAlturas += altura;
		
		if (altura < menorAltura){
			menorAltura = altura;
		}
		if (altura > mayorAltura){
			mayorAltura = altura;
		}
		
	}
	
	alturaPromedio = sumaAlturas/personas;


	for (float persona : listaAlturas){
		
		if (persona < alturaPromedio){
			cout << persona << "m  : Menor al Promedio";
		
		} else {
			cout << persona << "m  : Mayor al Promedio";
		}
		
		cout << endl << "--------------------------------------" << endl;
	}
		
}
