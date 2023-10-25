#include <iostream>

using namespace std;

double euro, fs, libro;

double &compra(int precio) {
    switch (precio) {
        case 1:
            return libro;
        case 2:
            return fs;
        default:
            return euro;

    }
}
int main() {
    euro = 1.0;
    fs = 0.85;
    libro = 15.0;

    cout << "Valor del euro: " << euro << endl;
    cout << " Valor de fs: " << fs << endl;
    cout << "Valor del libro: " << libro << endl;
  int precio = 1;
  double &moneda = compra(precio);

  cout << "El valor de la moneda es: " << moneda << endl;

  return 0;

}