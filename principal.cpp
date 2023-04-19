#include <iostream>
#include "funciones.cpp"
using namespace std;

int main()
{
    int cant, edad, i = 0;
    cout << "cuantad edades desea ingresar: ";
    cin >> cant;
    while (i < cant)
    {
        cout << "Dime edad: ";
        cin >> edad;
        if (hayEspacio())
            agregarEdad(edad);
        else
        {
            cout << "no hay espacio sificiente para almacenar mas edades";
            system("pause");
            break;
        };
        agregarEdad(edad);
        i++;
    }
    system("cls");
    cout << "Imprimiendo edades:\n"; 
    mostrarEdades();
    return 0;
}