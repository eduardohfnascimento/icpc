#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if ((B > C) && (D > A) && ((D + C) > (A + B)) && (C > -1 && D > -1) && (A % 2 == 0)) {
        cout << "Valores aceitos\n";
    }
    else {
        cout << "Valores nao aceitos\n";
    }

    return 0;
}