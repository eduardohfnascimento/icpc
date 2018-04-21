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
		vector<int> turma(5);
		map<string, int> m;
		map<string, int>::iterator it;
		for (int index = 0; index < testcases; ++index)
		{
			for (int index1 = 0; index1 < 5; ++index1)
			{
				cin >> turma[index1];
			}
			sort(turma.begin(), turma.end());
			string result = "";
			for (int index = 0; index < turma.size(); ++index)
			{
				stringstream convert;
				convert << turma[index];
				result = result + convert.str();
			}
			it = m.find(result);
			if (it == m.end())
			{
				m.insert(pair<string, int>(result, 1));
			}
			else
			{
				it->second++;
			}
		}
		int atual = 0;
		int alunos = 0;
		for (it = m.begin(); it != m.end(); ++it)
		{
			if (it->second == atual)
			{
				alunos = alunos + atual;
			}
			else if (it->second > atual)
			{
				alunos = it->second;
				atual = it->second;
			}
		}
		cout << alunos << endl;
	}
}
