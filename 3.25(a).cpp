#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;
    int i = 1;

    cout << "Introduce un numero no negativo: ";
    cin >> n;

    while (n < 0) {
        cout << "Error. Introduce un numero no negativo: ";
        cin >> n;
    }

    while (i <= n) {
        factorial = factorial * i;
        i++;
    }

    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}