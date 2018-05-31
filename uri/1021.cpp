#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
    float valor;
    int N100, N50, N20, N10, N5, N2;
    int M100, M50, M25, M10, M5, M1;

    cin >> valor;
    
    N100 = valor / 100;
    valor = fmod(valor, 100);
    N50 = valor / 50;
    valor = fmod(valor, 50);
    N20 = valor / 20;
    valor = fmod(valor, 20);
    N10 = valor / 10;
    valor = fmod(valor, 10);
    N5 = valor / 5;
    valor = fmod(valor, 5);
    N2 = valor / 2;
    valor = fmod(valor, 2);

    M100 = valor / 1;
    valor = fmod(valor, 1);
    M50 = valor / 0.50;
    valor = fmod(valor, 0.50);
    M25 = valor / 0.25;
    valor = fmod(valor, 0.25);
    M10 = valor / 0.10;
    valor = fmod(valor, 0.10);
    M5 = valor / 0.05;
    valor = fmod(valor, 0.05);
    M1 = round(valor / 0.01);
    valor = fmod(valor, 0.01);

    cout << "NOTAS:" << endl;
    cout << N100 << " nota(s) de R$ 100.00" << endl;
    cout << N50 << " nota(s) de R$ 50.00" << endl;
    cout << N20 << " nota(s) de R$ 20.00" << endl;
    cout << N10 << " nota(s) de R$ 10.00" << endl;
    cout << N5 << " nota(s) de R$ 5.00" << endl;
    cout << N2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << M100 << " moeda(s) de R$ 1.00" << endl;
    cout << M50 << " moeda(s) de R$ 0.50" << endl;
    cout << M25 << " moeda(s) de R$ 0.25" << endl;
    cout << M10 << " moeda(s) de R$ 0.10" << endl;
    cout << M5 << " moeda(s) de R$ 0.05" << endl;
    cout << M1 << " moeda(s) de R$ 0.01" << endl;
    system("PAUSE");

    return 0;
}