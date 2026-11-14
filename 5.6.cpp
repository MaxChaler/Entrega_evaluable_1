#include <iostream>
using namespace std;

int numeroAleatorio() {
    static int semilla = 12345;

    semilla = (semilla * 1103515245 + 12345) % 2147483647;

    return semilla / 65536;
}

int main() {
    int numero;

    numero = 1 + numeroAleatorio() % 2;

    numero = 1 + numeroAleatorio() % 100;

    numero = numeroAleatorio() % 10;

    numero = 1000 + numeroAleatorio() % 113;

    numero = -1 + numeroAleatorio() % 3;

    numero = -3 + numeroAleatorio() % 15;

    return 0;
}
