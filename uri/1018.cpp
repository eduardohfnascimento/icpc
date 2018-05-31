#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int valororiginal, valor;
    int N100, N50, N20, N10, N5, N2, N1;

    cin >> valororiginal;
    valor = valororiginal;
    N100 = valor / 100;
    valor = valor % 100;
    N50 = valor / 50;
    valor = valor % 50;
    N20 = valor / 20;
    valor = valor % 20;
    N10 = valor / 10;
    valor = valor % 10;
    N5 = valor / 5;
    valor = valor % 5;
    N2 = valor / 2;
    N1 = valor % 2;

    cout << valororiginal << endl;
    cout << N100 << " nota(s) de R$ 100,00" << endl;
    cout << N50 << " nota(s) de R$ 50,00" << endl;
    cout << N20 << " nota(s) de R$ 20,00" << endl;
    cout << N10 << " nota(s) de R$ 10,00" << endl;
    cout << N5 << " nota(s) de R$ 5,00" << endl;
    cout << N2 << " nota(s) de R$ 2,00" << endl;
    cout << N1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}