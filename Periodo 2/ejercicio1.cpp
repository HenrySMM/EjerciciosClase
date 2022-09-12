/*
PERIODO II SEMANA 1
Fábricas “El cometa” produce artículos con claves (1, 2) Se requiere un algoritmo para calcular 
los precios de venta y el costo de la producción, para esto hay que considerar lo siguiente: 

Costo de producción =Costo materia prima + Costo mano de obra + gastos de fabricación. 
Precio de venta = costo de producción + 45 % de costo de producción. 

El costo de la mano de obra se obtiene de la siguiente forma: para los productos con clave 1 
se carga 75 % del costo de la materia prima y para clave 2 se carga el 50%.

Para calcular el gasto de fabricación se considera que, si el artículo que se va a producir tiene claves 1, 
este gasto representa 30 % sobre el costo de la materia prima; si las claves son 2, representa 35 %; 

OBLIGATORIO USAR: FUNCIONES
*/

#include <iostream>
#include <iomanip>
using namespace std;

float materiaPrima;
int clave;

/*---------------------------Paso 1---------------------------*/
float costo_fabricacion(){
	
	float total;
	
	if (clave == 1) total = materiaPrima*0.30;
	else total = materiaPrima*0.35;
	
	return total;
}

float costo_manoDeObra(){
	float total;
	
	if (clave == 1) total = materiaPrima * 0.75;
	else total = materiaPrima * 0.50;
	
	return total; 
}

/*---------------------------Paso 2---------------------------*/

float costo_produccion(float manoDeObra, float fabricacion){
	
	float total;
	total = materiaPrima + manoDeObra + fabricacion;
	
	return total;
}

/*---------------------------Paso 3---------------------------*/
float costo_venta(float costoProduccion){
	
	float total;
	total = costoProduccion + (costoProduccion*0.45);
	
	return total;
}

/*---------------------------------------------------------------------------*/

int main(){
	
	float manoDeObra, fabricacion, venta, produccion;
	
	do{
		cout << "Ingrese el costo de la materia Prima a utilizar: ";
		cin >> materiaPrima;
		
		if (materiaPrima < 0){
			cout << "Valor no valido\n";
			system("pause");
		}
		
		system("cls");
	} while (materiaPrima < 0);
	
	do{
		cout << "Ingrese el tipo de clave [1/2]: ";
		cin >> clave;
		
		if (clave > 2 || clave < 1){
			cout << "Valor no valido\n";
			system("pause");
		}
		system("cls");
	} while (clave > 2 || clave < 1);
	system("cls");
	
	
	
	
	manoDeObra = costo_manoDeObra();
	fabricacion = costo_fabricacion();
	
	produccion = costo_produccion(manoDeObra, fabricacion);
	venta = costo_venta(produccion);
	
	
	
	cout << "FABRICA EL COMENTA"<< endl << endl;
	cout << "Costo de Materia Prima: $" << setw(9) << materiaPrima << endl;
	cout << "Costo de Mano de Obra:  $" << setw(9) << manoDeObra << endl;
	cout << "Gastos de fabricacion:  $" << setw(9) << fabricacion << endl;
	cout << "_______________________________________________" << endl;
	cout << "Costo de Produccion:    $" << setw(9) << materiaPrima << endl << endl << endl;
	cout << "Precio de Venta: $" << venta << endl << endl;
	
}
