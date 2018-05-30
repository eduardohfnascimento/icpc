#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {
    float x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float dist = sqrtf(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout.precision(4);
    cout << fixed << dist << endl;

    return 0;
}