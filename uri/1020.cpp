#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int ano, mes, dias;

    cin >> dias;

    ano = dias / 365;
    dias = dias % 365;
    mes = dias / 30;
    dias = dias % 30;
     
    cout << ano << " ano(s)\n" << mes << " mes(es)\n" << dias << " dia(s)" << endl;
    return 0;
}