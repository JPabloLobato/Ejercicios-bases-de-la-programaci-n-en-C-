#include <iostream>
#include <string>

using namespace std;  int main() {
    string nombre;
    int edad;
    cout << "Por favor ingresa tu nombre: ";
    cin >> nombre;
    cout << "Por favor ingresa tu edad: ";
    cin >> edad;
    cout << "Hola, " << nombre << "! Tienes " << edad << " anos.\n";
    return 0;
}