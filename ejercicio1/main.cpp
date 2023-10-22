#include <iostream>
#include <string>

int main() {
    //Declarar variables
    std::string nombre;
    int edad;

    //Solicitar nombre al usuario
    std::cout << "Por favor, introduce tu nombre: ";
    std::cin >> nombre;

    //Solicitar edad al usuario
    std::cout << "Por favor, introduce tu edad: ";
    std::cin >> edad;

    //Devolver edad y nombre al usuario
    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cout << "Tu edad es: " << edad << std::endl;

    return 0;
}
