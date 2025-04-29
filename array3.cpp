#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int n=10;

int numeros_aleatorios(int max,int min);
void llenar_arreglo_aleatorio(int arreglo[n]);
void mostrar_resultado(int arreglo[n]);

int numeros_aleatorios(int max, int min){
    int rango = max - min + 1;
    return rand()%rango + min ;
}
void llenar_arreglo_aleatorio(int arreglo[n]){
    for(int i=0;i<n;i++){
        int numeros = numeros_aleatorios(20,10);
        arreglo[i]=numeros;
    }

}
void mostrar_resultado(int arreglo[n]){
    for (int i=0;i<n;i++) {
        cout <<arreglo[i]<<endl;
    }
}

main(){
    srand(time(0));
    int arreglo[n];
    llenar_arreglo_aleatorio(arreglo);
    mostrar_resultado(arreglo);

}

