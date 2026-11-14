#include <iostream>
using namespace std;

double calcularTarifa(double horas) {
    double importe = 20;

    if (horas > 3) {
        int horasExtra = horas - 3;

        if (horas - 3 > horasExtra) {
            horasExtra++;
        }

        importe += horasExtra * 5;
    }

    if (importe > 50) {
        importe = 50;
    }

    return importe;
}

int main() {
    double horas1 = 1.5;
    double horas2 = 4.0;
    double horas3 = 24.0;

    double importe1 = calcularTarifa(horas1);
    double importe2 = calcularTarifa(horas2);
    double importe3 = calcularTarifa(horas3);

    cout << "Coche  Horas  Importe" << endl;
    cout << "1      " << horas1 << "      " << importe1 << endl;
    cout << "2      " << horas2 << "      " << importe2 << endl;
    cout << "3      " << horas3 << "     " << importe3 << endl;

    cout << "TOTAL  " << horas1 + horas2 + horas3
        << "    " << importe1 + importe2 + importe3 << endl;

    return 0;
}
