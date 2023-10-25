#include <iostream>

int suma (int a, int b) {
    return a + b;
}

using namespace std;
int main () {
    int result = suma(5,7);
    cout << "La suma es: " << result << endl;
    return 0;
}
