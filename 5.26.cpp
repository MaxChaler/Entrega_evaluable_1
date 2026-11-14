#include <iostream>
using namespace std;

void moverDiscos(int discos, int origen, int destino, int auxiliar) {

    if (discos == 1) {
        cout << origen << " -> " << destino << endl;
    }
    else {
        moverDiscos(discos - 1, origen, auxiliar, destino);

        cout << origen << " -> " << destino << endl;

        moverDiscos(discos - 1, auxiliar, destino, origen);
    }
}

int main() {
    int discos = 3;

    moverDiscos(discos, 1, 3, 2);

    return 0;
}
