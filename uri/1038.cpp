#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
    int codigo, quantidade;
    float valor = 0;

    cin >> codigo >> quantidade;

switch(codigo) {
        case 1:
            valor = 4 * quantidade;
            break;
        case 2:
            valor = 4.50 * quantidade;
            break;
        case 3:
            valor = 5 * quantidade;
            break;
        case 4:
            valor = 2 * quantidade;
            break;
        case 5:
            valor = 1.50 * quantidade;
            break;
        }

    cout.precision(2);
    cout  << "Total: R$ " << fixed << valor << endl;

    return 0;
}