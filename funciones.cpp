#include<iostream>

using namespace std;
#define MAX 100

int edades[MAX];
int pos=0;

void agregarEdad(int edad);
bool hayEspacio();
void mostrarEdades();
void mostrarEdadesMayor();
bool esMayor(int edad);
int menu();

void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}

bool hayEspacio(){
    return pos < MAX;
}

void mostrarEdades(){
    for (int i = 0; i < pos; i++)
    {
        cout << edades[i] << endl;
    }
}

bool esMayor(int edad){
    return edad >= 18;
}

void mostrarEdadesMayor(){
    for (int i = 0; i < pos; i++){
           
        int edad = edades[i];
        if (esMayor(edad)){
        
            cout << edades[i] << endl;
        }
    }
}

int menu(){
    int opcion;
    cout << "Listado de edades " << endl;
    cout << "1. agregar edad\n " << endl;
    cout << "2. mostrar edades\n " << endl;
    cout << "3. mostrar edades mayores o igual a 18\n " << endl;
    cout << "4. salir\n " << endl;
    cout << "Digite la opcion: " << endl;
    cin >> opcion;
    return opcion;
}