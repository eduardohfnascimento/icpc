#include <iostream>
#include <cstdlib>
#define KMPORLITRO 12;
using namespace std;

int main() {
    int kilometros, horas;
    float litros;

    cin >> horas >> kilometros;

    litros = (kilometros * horas)/(float)KMPORLITRO;
    
    cout.precision(3);
    cout << fixed << litros << endl;

    return 0;
}