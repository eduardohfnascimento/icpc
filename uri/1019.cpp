#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int segundos, minutos, horas;

    cin >> segundos;

    horas = segundos / (60*60);
    segundos = segundos % (60*60);
    minutos = segundos / (60);
    segundos = segundos % (60);

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}