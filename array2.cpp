#include<iostream>
using namespace std;
const int n = 3;
void pedir_valores(int arreglo[n]);
void intercambia(int arreglo[n]);
void mostrar_resultado(int arreglo[n]);

void pedir_valores(int arreglo[n]){
    for (int i = 0; i < n; i++){
        cout<<"Digite el valor "<<i+1<<" :";
        cin>>arreglo[i];
    }
}
void intercambia(int arreglo[n]){
    arreglo[2]=5;
}
void mostrar_resultado(int arreglo[n]){
    for  (int i = 0; i < n; i++){
        cout<<"arreglo["<<i<<" ] ="<<arreglo[i]<<endl;
    }
}

int main(){
    int valores[n];
    pedir_valores(valores);
    intercambia(valores);
    mostrar_resultado(valores);
    return 0;
}
