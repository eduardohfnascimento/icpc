#include <iostream>
using namespace std;
int main() {
 long long a, b;
 while (cin >> a >> b) {
     if (b>a){
         long long aux = a;
         a = b;
         b = aux;
     }
     cout << a - b << endl;    
 }
        return 0;
}