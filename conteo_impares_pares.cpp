/*Genera un arreglo de n = 10 enteros aleatorios en el rango [20-70].
Recorre ese arreglo y cuenta cuántos números son pares y cuántos impares.
Muestra el arreglo, luego imprime:*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int n= 10;
int numeros_aleatorios(int max, int min);
void llenar_arreglo(int a[n]);
int pares(int a[n]);
int impares(int a[n]);
void mostrar_arreglo(int a[n]);
void mostrar_resultado(int m, int n);

int numeros_aleatorios(int max, int min){
    int rango = max - min + 1;
    return rand()% rango + min;
}
void llenar_arreglo(int a[n]){
    for(int i=0;i<n;i++){
        int numeros = numeros_aleatorios(70,20);
        a[i] = numeros;
    }
}
int pares(int a[n]){
    int contador_p =0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            contador_p++;
        }
    }
    return contador_p;
}
int impares(int a[n]){
    int contador_i =0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            contador_i++;
        }
    }
    return contador_i;
}
void mostrar_arreglo(int a[n]){
    for(int i=0;i<n;i++){
        cout<<"El arreglo["<<i<<"]="<<a[i]<<endl;
    }
}
void mostrar_resultado(int m, int n){
    cout<<"Total pares:"<<m<<endl;
    cout<<"Total impares:"<<n<<endl;
} 

int main(){
    srand(time(0));
    int arreglo[n];
    llenar_arreglo(arreglo);
    int n_pares = pares(arreglo);
    int n_impares = impares(arreglo);
    mostrar_arreglo(arreglo);
    mostrar_resultado(n_pares,n_impares);
    return 0;
}

