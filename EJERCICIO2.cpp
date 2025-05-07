#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int n=15;

int pedir_numero();
int numeros_aleatorios(int max,int min);
void leer_arreglo(int arreglo[n]);
void mostrar_arreglo(int arreglo[n]);
int esta_el_numero(int arreglo[n],int m);

int pedir_numero(){
    int num;
    cout<<"Digite un numero entre(20-50):";
    cin>>num;
    while(num<20 || num>50){
        cout<<"Invalido.Digite nuevamente:";
        cin>>num;
    }
    return num;
}
int numeros_aleatorios(int max,int min){
    int rango = max - min + 1;
    return rand()%rango+min;
}
void leer_arreglo(int arreglo[n]){
    for(int i=0;i<n;i++){
        int numeros = numeros_aleatorios(50,20);
        arreglo[i]= numeros;
    }
}
void mostrar_arreglo(int arreglo[n]){
    for(int i=0;i<n;i++){
        cout<<"arreglo["<<i<<"] ="<<arreglo[i]<<endl;
    }
}
int esta_el_numero(int arreglo[n], int m){
    int i=0;
    char band = 'F';
    while((band=='F')&&(i<n)){
        if(arreglo[i]==m){
            band ='V';
        }
        i++;
    }
    if(band=='F'){
        i=0;
        return i++;
    }
    else if(band=='V'){
        return i++;
    }

}
int main(){
    srand(time(0));
    int arreglo[n];
    int dato = pedir_numero();
    leer_arreglo(arreglo);
    mostrar_arreglo(arreglo);
    int contador = esta_el_numero(arreglo,dato);
    if(contador==0){
        cout<<"-1"<<endl;
    }
    else if(contador>0){
        cout<<"Se encontro el numero y su primera posicion es:"<<contador-1<<endl;
    }
    system("pause");
    return 0;
}
