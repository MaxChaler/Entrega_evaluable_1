#include <iostream>
using namespace std;

int lanzarMoneda() {
    static int semilla = 12345;

    semilla = (semilla * 1103515245 + 12345) % 2147483647;

    return (semilla / 65536) % 2;
}

int main() {
    int caras = 0;
    int cruces = 0;

    for (int i = 1; i <= 100; i++) {
        int resultado = lanzarMoneda();

        if (resultado == 1) {
            cout << "Cara" << endl;
            caras++;
        }
        else {
            cout << "Cruz" << endl;
            cruces++;
        }
    }

    cout << endl;
    cout << "Caras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;

    return 0;
}
