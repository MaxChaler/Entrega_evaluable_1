#include <iostream>
using namespace std;

int main() {
    int n, aux;
    int d1, d2, d3, d4;

    cout << "Introduce el numero cifrado: ";
    cin >> n;

    while (n < 0 || n > 9999) {
        cout << "Error. Introduce un numero de cuatro cifras: ";
        cin >> n;
    }

    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;

    aux = d1;
    d1 = d3;
    d3 = aux;

    aux = d2;
    d2 = d4;
    d4 = aux;

    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "Numero original: ";
    cout << d1 << d2 << d3 << d4 << endl;

    return 0;
}