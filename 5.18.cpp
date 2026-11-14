#include <iostream>
using namespace std;

int invertirCifras(int numero) {
    int invertido = 0;

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
    }

    return invertido;
}

int main() {
    int numero;

    cout << "Introduce un numero: ";
    cin >> numero;

    cout << "Numero invertido: " << invertirCifras(numero) << endl;

    return 0;
}
