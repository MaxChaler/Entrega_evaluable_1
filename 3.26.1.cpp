#include <iostream>
using namespace std;

int main() {
    int n, aux;
    int d1, d2, d3, d4;

    cout << "Introduce un numero de cuatro cifras: ";
    cin >> n;

    while (n < 1000 || n > 9999) {
        cout << "Error. Introduce un numero de cuatro cifras: ";
        cin >> n;
    }

    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    aux = d1;
    d1 = d3;
    d3 = aux;

    aux = d2;
    d2 = d4;
    d4 = aux;

    cout << "Numero cifrado: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}