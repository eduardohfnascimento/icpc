#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
 int a, b;
 while (cin >> a ) {
    if (a == 0)
         return 0;
    priority_queue<int, std::vector<int>, std::greater<int> > q;
    for (int index = 0; index<a; ++index)
    {
        cin >> b;
        q.push(b);
    }
    int answer = 0;
        while(q.size() > 1)
        {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            answer = + answer + x + y;
            q.push(x+y);
        }
    cout << answer << endl;
         
 }
        return 0;
}