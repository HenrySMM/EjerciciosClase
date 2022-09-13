/*
PERIODO II SEMANA 6
Crear una función que reciba como parámetro un número entero y escriba la tabla de 
multiplicar de ese número (por ejemplo: para el 3 deberá llegar desde 3x0=0 hasta 3x10=30)

*/

#include <iostream>
using namespace std;

int main(){
	
	int numero;
	const int limite = 10;
	
	cout << "Ingrese el numero que desea multiplicar: ";
	cin >> numero;
	cout << endl;
	
	for (int i=0; i <= limite; i++){
		cout << numero << "x" << i << " = " << numero*i << endl;
	}
	
	
}
