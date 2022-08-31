/*
Objetivo: 
Un programa que ingrese datos a una matriz sobre titulos y autores de libros
y que sea capaz de imprimir la matriz una vez todos los datos se hayan ingresado
*/

#include <iostream>
#include <cstring>
using namespace std;


//me ahorra un poco de tiempo, pero no es necesario
void clean(){
	system("cls");
}

int main(){
	
	string libros[5][2];
	int maxLong = 7;
	
	// Ingreso de datos en la tabla
	cout << "Ingrese la informacion solicitada: \n\n";
	string libro, autor;
	
	for(int i=0; i < 5; i++){
		
		cout << "============== Libro" << i+1 << " ==============\n";
		cout << "Libro: ";
		getline(cin, libro);
		
		cout << "Autor: ";
		getline(cin, autor);
		
		libros[i][0] = libro;
		libros[i][1] = autor;
		
		if (libro.size() > maxLong){
			maxLong = libro.size() + 2;
		}
	}
	
	clean();
	cout << "Datos Guardados Exitosamente\n";
	system("pause");
	clean();
	
	
	
	char eleccion;
	int espacios;
	//Visualizar Tabla
	do{
		cout << "Desea visualizar la tabla? [s/n]" << endl << ">>";
		cin >> eleccion;
		
		switch(eleccion){
			case 's':
				break;
			case 'n':
				return 0;
			default:
				cout << "Valor no valido\n";
				system("pause");
				clean();
				continue;
		};
		
		clean();
		
		//Solo para imprimir el encabezado de la Tabla
		cout << "LIBRO";
		espacios = maxLong - 5;
		for (int s=0; s<espacios; s++){
			cout << " ";
		}
		cout << "AUTOR" << endl << endl;
		
		
		//Imprimir datos de la tabla
		for (int i=0; i<5; i++){
			cout << libros[i][0];
			libro = libros[i][0];
			
			espacios = maxLong - libro.size();
			
			for (int s=0; s<espacios; s++){
				cout << " ";
			}
			
			cout << libros[i][1] << endl;
		}
		break;
		
	} while (true);
	
	return 0;
	
} 
