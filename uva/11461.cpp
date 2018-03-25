#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int a, b;
 while (cin >> a >> b) {
     if (a == 0 && b == 0)
         return 0;
    if (b<a)
    {
        int aux = b;
        b = a;
        a = aux;
    }
     int answer = 0;
     
     while (a <= b)
     {
         float squarefloat = sqrt(a);    
         int squareint = squarefloat;
         if (squarefloat != squareint)
            ++a;
         else 
         {
             answer++;
             a++;
         }
     }
     cout << answer << endl;
     
 }
        return 0;
}