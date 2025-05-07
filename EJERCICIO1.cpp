#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

const int n = 10;

int numeros_aleatorios(int max, int min);
void leer_arreglo(int a[n]);
void escribir_arreglo(int a[n]);
void ordenar_arreglo(int a[n]);
void mostrar_arreglo_ordenado(int a[n]);

int numeros_aleatorios(int max,int min){
    int rango = max - min + 1;
    return rand()%rango + min;

}

void leer_arreglo(int a[n]){
    for(int i=0;i<n;i++){
        int numero = numeros_aleatorios(30,20);
        a[i] = numero;
    }
}
void escribir_arreglo(int a[n]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void ordenar_arreglo(int a[n]){
    int aux;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                aux = a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
}
void mostrar_arreglo_ordenado(int a[n]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    srand(time(0));
    int a[n];
    leer_arreglo(a);
    escribir_arreglo(a); 
    ordenar_arreglo(a);
    cout<<"------------ORDENADO--------"<<endl;
    mostrar_arreglo_ordenado(a);
    system("pause");
    return 0;
}