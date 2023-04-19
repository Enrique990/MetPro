#include<iostream>

using namespace std;
#define MAX 10

int edades[MAX];
int pos=0;

void agregarEdad(int edad);
bool hayEspacio();
void mostrarEdades();
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