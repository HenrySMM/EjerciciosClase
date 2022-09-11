/*
PERIODO I SEMANA 2
Realizar un algoritmo que obtenga la suma de los números pares hasta 100.
*/

#include <iostream>
using namespace std;

int main(){
	
	int i = 1;
	
	while (i <= 100){
		if (i<10) cout << " ";
		cout << i;
		if (i<100) cout << ", ";
		if (i%10 == 0) cout << endl;
		i++;
	}
	
}
