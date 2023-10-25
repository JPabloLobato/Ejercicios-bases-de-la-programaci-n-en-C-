#include <iostream>

using namespace std;
int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }
    cout << "Los diez primeros números naturales son: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << endl;
    }
    return 0;
}
