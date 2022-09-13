/*
PERIODO II SEMANA 7
Hacer una Función en C++ que obtenga la división entera y el resto utilizando restas sucesivas.
*/

#include <iostream>
using namespace std ;

void divisionSucesivaDe ( int dividendo , int divisor ) {
    int cociente ;
    while ( dividendo >= divisor )
    { dividendo -= divisor ; cociente ++ ; }
    
    system("cls");
    cout << " El resto es : " << dividendo << endl ;
    cout << " El cociente es : " << cociente << endl ;
}

int main ( )
{
    int dividendo , divisor ;
    cout << " Ingrese el dividendo : " ; cin >> dividendo ;
    cout << " Ingrese el divisor : " ; cin >> divisor ;
    divisionSucesivaDe ( dividendo , divisor ) ;
    return 0 ;
}


