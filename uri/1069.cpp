#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include<stack>
#include <string>
using namespace std;

int main() {
	int a;
	while (cin >> a)
	{
		for (int index = 0; index < a; ++index)
		{
			int result = 0;
			string str;
			stack<char> q;
			cin >> str;
			for (int index1 = 0; index1 < str.size(); ++index1)
			{
				if (str[index1] != '.')
				{
					if (!q.empty() && str[index1] == '>')
					{
						if (q.top() == '<')
						{
							q.pop();
							result = result + 1;
						}

					}
					else
					{
						q.push(str[index1]);
					}
				}

			}
			cout << result << endl;
		}

	}
}