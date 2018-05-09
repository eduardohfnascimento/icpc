#include <iostream>
using namespace std;
int main() {
    cout << "antes";
 int a, b, c;
 cout << "dps";
 while (cin >> a >> b >> c) {
 if (a > b && a > c) 
 {
       cout << a << " eh o maior" << endl;
 }
 else if (b > a && b > c)
 {
       cout << b << " eh o maior" << endl;
 }
 else if (c > b && c > a)
 {
       cout << c << " eh o maior" << endl;
 }
}
 return 0;
}