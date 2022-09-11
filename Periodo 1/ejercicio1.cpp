/*
PERIODO I SEMANA 2
Dada N notas calcular el promedio de las notas aprobadas y el promedio de las notas desaprobadas. 
La nota para aprobar es 6.

OBLIGATORIO USAR: ESTRUCTURA WHILE
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void alerta(){
	printf("============================================================\n");
	printf("! ! !  Valor no valido, por favor intentarlo de nuevo  ! ! !\n");
	printf("============================================================\n\n");
	system("pause");
	system("cls");
}


int main(){
	
	string input;
	int repeticiones = 1; int cantAprobado=0, cantDesaprobado=0;
	float nota, sumAprobado = 0, sumDesaprobado = 0, promedioAprobado, promedioDesaprobado;
	
	while (true){
		
		cout << "<Ingrese 'stop' para finalizar el ingreso de notas>\n";
		cout << "Ingrese la nota #" << repeticiones << ": ";
		cin >> input;
		
		
		if (input == "stop"){
			system("cls");
			break;
		}
		
		
		nota = stoi(input);
			
		if (nota < 0 || nota > 10){
			alerta();
			continue;
		}
			
			
		if (nota >= 6.0) {
			sumAprobado += nota;
			cantAprobado++;
		} else {
			sumDesaprobado += nota;
			cantDesaprobado++;
		}
		
		repeticiones++;
		system("cls");
	}
	
	promedioAprobado = sumAprobado/cantAprobado; 
	promedioDesaprobado = sumDesaprobado/cantDesaprobado;
	
	cout << "Promedio:\n" << "Notas aprobadas: " << promedioAprobado << "\nNotas reprobadas: " << promedioDesaprobado;
}
