#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
    double A, B, C;
    double delta, x1, x2;

    cin >> A >> B >> C;

    delta = (pow (B, 2) - (4 * A * C));

    if (delta >= 0 && A != 0) {
        x1 = ((-B + sqrtl(delta)) / (2*A));
        x2 = ((-B - sqrtl(delta)) / (2*A));

        cout.precision(5);
        cout << "R1 = " << fixed << x1 << endl;
        cout << "R2 = " << fixed << x2 << endl;
    }
    else {
        cout << "Impossivel calcular\n";
    }

    return 0;
}