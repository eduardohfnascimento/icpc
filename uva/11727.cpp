#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int a, b, c, d;
    cin >> a;
    
    for (int cont = 1; cont <=a; ++cont)
    {
        cin >> b >> c >> d;
        if (b >= c && b <= d || b > d && b < c)
        {
            cout << "Case " << cont << ": " << b << endl;
        }
        else if (c > b && c < d || c < b && c > d)
        {
            cout << "Case " << cont << ": " << c << endl;
        }
        else
        {
            cout << "Case " << cont << ": " << d << endl;
        }
    }
        return 0;
}
