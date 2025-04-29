#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int n=20;

int numeros_aleatorios(int max, int min);
void llenar_arreglo();
void mostrar_resultado();

int numeros_aleatorios(int max, int min){
    int rango = max - min + 1;
    return rand()%rango + min;
}
void llenar_arreglo(int arreglo[n]){
    for(int i=0;i<n;i++){
        int numero = numeros_aleatorios(100,1);
        arreglo[i] = numero;
    }
}
void mostrar_resultado(int arreglo[n]){
    for(int i=0;i<n;i++){
        cout<<"El arreglo["<<i<<"] ="<<arreglo[i]<<endl;
    }
}
int main(){
    srand(time(0));
    int arreglo[n];
    llenar_arreglo(arreglo);
    mostrar_resultado(arreglo);
    return 0;
}

