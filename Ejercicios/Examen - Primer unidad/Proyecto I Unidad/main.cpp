#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int Opc, Opcion;
    do {
    cout << "************** \n MENU DE JUEGOS \n**************" << endl;

    cout << "Seleccione un juego "
         << "\n1 - Nave estelar \n2 - Serpiente"

         << "\n Ingrese un numero del menu para seleccionar un juego:" << endl;
    cin >> Opc ;
    switch (Opc){
        case 1: 
         starShip();
        break;

        case 2:
         snake(); 
        break;

        default: 
        cout << "ingrese una opcion valida:  " << endl;
         system("pause");
       }
      system("cls");
    } while (Opcion=!0);

    return 0;
}
