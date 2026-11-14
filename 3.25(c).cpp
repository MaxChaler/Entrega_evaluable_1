#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    double x;
    double potencia = 1;
    double factorial = 1;
    double resultado = 1;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el numero de terminos: ";
    cin >> n;

    while (n < 1) {
        cout << "Error. Introduce un numero mayor que 0: ";
        cin >> n;
    }

    while (i < n) {
        potencia = potencia * x;
        factorial = factorial * i;

        resultado = resultado + potencia / factorial;

        i++;
    }

    cout << "El valor aproximado de e^" << x << " es: " << resultado << endl;

    return 0;
}