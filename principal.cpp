#include <iostream>
#include <estructura.h>
#include "funciones.cpp"
using namespace std;

int main()
{
    int cant, edad, i = 0, opcion = 0;
    estudiante est;
    est.codigo = 1;
    strcpy(est.nombre, "jose");
    
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            cout << "Ingrese la edad: ";
            cin >> edad;
            agregarEdad(edad);
            system("pause");
            break;
        case 2:
            mostrarEdades();
            system("pause");
            break;
        case 3:
            mostrarEdadesMayor();
            system("pause");
            break;
        default:
            cout << "opcion invalida...\n";
            system("pause");
            break;
        } 
    } while (opcion !=4);
    return 0;
}