/*
PERIODO III SEMANA 1
*/

#include "iostream"
using namespace std;
int main (){
    int selector1 , selector2 ;
    cout << "ingrese un numero para convertirlo a letras " << endl ;
    cin >> selector1 ;
    
  switch ( selector1 ) {
   case 1 :
	    cout << "UNO" ;
	    break ;
   case 2 :
	    cout << "DOS" ;
	    break ;
   case 3 :
	    cout << "TRES" ;
	    break ;
   case 4 :
	    cout << "CUATRO" ;
	    break ;
   case 5 :
	    cout << "CINCO" ;
	    break ;
   default : cout << " fuera de rango numerico " ;
  }
}
