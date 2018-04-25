#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include<stack>
#include <map>
#include<sstream>
using namespace std;

int main()
{
	int testcases;
	while (cin >> testcases)
	{
		if (testcases == 0)
		{
			return 0;
		}
		stack<int> s;
		int answer = 0, controle = -1, primeiro = -1;

		for (int index = 0; index < 2; ++index)
		{
			int topo;
			cin >> topo;
			if (controle == -1 && s.empty())
			{
				s.push(topo);
				answer++;
			}
			else if (controle == -1 && !s.empty())
			{
				if (s.top() > topo)
				{
					controle = 0; // descendo
					primeiro = 0;
					s.pop();
					s.push(topo);
					answer++;
				}
				else if (s.top() < topo)
				{
					controle = 1; // subindo
					primeiro = 1;
					s.pop();
					s.push(topo);
					answer++;
				}
			}
		}
		if (testcases > 2)
		{
			for (int index = 2; index < testcases; ++index)
			{
				int topo;
				cin >> topo;
				if (controle == 0 && s.top() < topo)
				{
					controle = 1; // subindo
					s.pop();
					s.push(topo);
					answer++;
				}
				else if (controle == 0 && s.top() > topo)
				{
					s.pop();
					s.push(topo);
				}
				else if (controle == 1 && s.top() < topo)
				{

					s.pop();
					s.push(topo);

				}
				else if (controle == 1 && s.top() > topo)
				{
					controle = 0; // descendo
					s.pop();
					s.push(topo);
					answer++;
				}
			}
		}
		if (controle != primeiro)
		{
			answer--;
		}
		cout << answer << endl;
	}
}