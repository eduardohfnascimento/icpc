#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    
    for (int index = 0; index < testcases; ++index)
    {
        int iteration= 0;
        string str;
        cin >> str;
        if (str.length() == 1)
        {
            cout << 0 << " "<< str << endl;
        }
        else
        {
            string str_reverse = str;
            reverse(str_reverse.begin(), str_reverse.end());
            while (strcmp(str.c_str(), str_reverse.c_str()) != 0)
            {
                long long a = std::stoll (str);
                long long b = std::stoll (str_reverse);
                a = a + b;
                str = to_string(a);
                str_reverse = str;
                reverse(str_reverse.begin(), str_reverse.end());
                iteration++;
            }
            cout << iteration<< " " << str_reverse << endl;
            
        }
    }
}