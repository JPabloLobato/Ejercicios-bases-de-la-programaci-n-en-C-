#include <iostream>

//Se utiliza double y no int, porque es una constantes matemática.
const double PI = 3.14159265359;
typedef unsigned int EnteroPositivo;
enum Meses {
    Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre
};
void saludar() {
    std::cout <<"¡Hola desde el void! " << std::endl;
}
using namespace std;
int main() {
    //Para utlizar la constante simbolica hallamos el area de un circulo con radio 5.
    double r = 5;
    double area = PI * r * r;
    cout << "El área de un círculo con radio 5 es: " << area << endl;

    //Utilización el typedef
    EnteroPositivo cantidad = 118;
    cout << "Existen "<< cantidad << " de elementos en la tabla periódica. "<< endl;

    //Uilización de enumeración
    Meses mes = Octubre;
            cout << "Estamos a finales del mes "<< mes <<", es decir de agosto."<<endl;


    //Función VOID
    saludar();
    return 0;
}