#include <iostream>
using namespace std;
int main() {
 long long a, b;
 while (cin >> a >> b) {
     long long alinha = a;
     long long blinha = b;
       if (a > b)
       { 
           long long aux = b;
           b = a;
           a = aux;
       }
       long long finalresult = 0;
       long long aqui = b;
       while (b >= a)
       { 
         long long result = 0;
           long long n = b;    
 while (n != 1)
 {
       
       if(n%2 != 0)
       {
              n = (3 * n) + 1;
              ++result;
       }
       else if (n%2 == 0)
       {
            n = n/2;
            ++result;
       }
 }
       ++result;
       --b;
       if (result>finalresult)
       {finalresult = result;
       }
       }
 cout << alinha << " " << blinha << " " << finalresult << endl;    
 }
        return 0;
}