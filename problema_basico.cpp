#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int n=10;

int numeros_aleatorios(int max, int min);
void llenar_n_arreglo(int arreglo[n]);
void mostrar_resultados(int arreglo[n]);

int numeros_aleatorios(int max, int min){
    int rango = max - min + 1;
    return rand()% rango + min;
}
void llenar_n_arreglo(int arreglo[n]){
    for(int i=0;i<n;i++){
        int numeros = numeros_aleatorios(1000,1);
        arreglo[i]= numeros;
    }
}
void mostrar_resultados(int arreglo[n]){
    for(int i=0;i<n;i++){
        cout<<"El arreglo["<<i<<"] ="<<arreglo[i]<<endl;
    }
}

int main(){
    srand(time(0));
    int arreglo[n];
    llenar_n_arreglo(arreglo);
    mostrar_resultados(arreglo);
    return 0;
}

