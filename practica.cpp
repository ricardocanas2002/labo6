#include <iostream>

using namespace std;

//Programa que muestre una cuenta regresiva hasta cero,
//Partiendo de un numero determinado por el usuario

int main () {

    int num = 0;

    cout<<"Ingrese un numero entero: " <<endl;
    cin>>num;

    for (int i = num; i >= 0; i--){
        cout<<"El conteo es: " << i <<endl;
    }

    return 0;
}