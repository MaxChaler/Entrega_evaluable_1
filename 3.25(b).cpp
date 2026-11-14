#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    double factorial = 1;
    double e = 1;

    cout << "Introduce el numero de terminos: ";
    cin >> n;

    while (n < 1) {
        cout << "Error. Introduce un numero mayor que 0: ";
        cin >> n;
    }

    while (i < n) {
        factorial = factorial * i;
        e = e + 1.0 / factorial;
        i++;
    }

    cout << "El valor aproximado de e es: " << e << endl;

    return 0;
}