#include <iostream>

using namespace std;

//Declaro funciones para el ultimo apartado
int suma(int a, int c) {
    return (a + c);
}

int resta(int a, int c) {
    return (a - c);
}


//Punteros de variables

     int main() {
     int a = 1;
     int *p = &a;
    cout <<"Valor de a: "<< *p << endl;


//Punteros y arrays

 int arr[] = {1,2,3,4,5};
 int *ptr = arr;
    cout << "El quinto valor es: " << *(ptr+4) << endl;


//Asignacion de memoria

int n = 10;
char *arrai = new char[n];

for (int i = 0; i < n; i++) {
    arrai[i] = 'A' + i;
}
    cout << "El arreglo es: ";
for (int i = 0; i < n; i++) {
    cout << arrai[i] << " ";
}
    cout << endl;
 delete[] arrai;


 //Aritmetica de punteros

 int numeros[] = {10,20,30,40,50};
 int *p2 = numeros;
cout <<"El tercer elemento es: "<< *(p2 + 2) << endl;


//Punteros de punteros

char n1= 'A';
char *p1 = &n1;
char **pt2 = &p1;

cout << "Valor del primer caracter: " << n1 << endl;
cout << "Valor del primer puntero: " << *p1 << endl;
cout << "Valor del segundo puntero: " << **pt2 << endl;


//Punteros de funciones
int (*pfun)(int, int);

pfun = suma;

int resultado = pfun(5,3);

cout<<"Resultado de la suma: " << resultado << endl;

pfun = resta;

resultado = pfun(8,2);
cout<< "Resultado de la resta: " <<resultado << endl;

    return 0;
}