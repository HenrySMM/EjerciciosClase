/*
PERIODO III SEMANA 3
*/

#include <iostream>
using namespace std;
int main ( )
{

    int arr [4] = { 10 , 20 , 30 , 40 } ;

    cout << "Traversing the array with foreach using array's data type: ";
    for (int x:arr ) cout << x << " " ;

    cout << endl << "Traversing the array with foreach using auto keyword: ";
      for (auto x:arr ) cout << x << " " ;
}
