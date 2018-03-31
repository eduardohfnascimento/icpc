#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include<stack>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
       queue <int> fila;
       priority_queue<int> fila_de_prioridade;
       stack<int> pilha;
       bool ehpilha = true, ehfila = true, ehfila_de_prioridade = true;
       int op, elemento, retirado;

       for(int index = 0; index < a; ++index)
       {
           cin >> op >> elemento;
           if (op == 1)
           {
               fila.push(elemento);
               fila_de_prioridade.push(elemento);
               pilha.push(elemento);
           }
           else
           {
               if (ehpilha)
               {
                   if (!pilha.empty())
                   {
                        retirado = pilha.top();
                        pilha.pop();
                        if (retirado != elemento)
                        {
                            ehpilha = false; 
                        }
                   }
                   else
                   ehpilha = false;
               }
               if (ehfila_de_prioridade)
               {
                   if (!fila_de_prioridade.empty())
                   {
                        retirado = fila_de_prioridade.top();
                        fila_de_prioridade.pop();
                        if (retirado != elemento)
                        {
                            ehfila_de_prioridade = false; 
                        }
                   }
                   else
                   ehfila_de_prioridade = false;
               }
               if (ehfila)
               {
                   if (!fila.empty())
                   {
                        retirado = fila.front();
                        fila.pop();
                        if (retirado != elemento)
                        {
                            ehfila = false;
                        }
                    }
                    else
                    {
                        ehfila = false;
                    }                 
                }
             }    

        }
        if ((ehfila && ehfila_de_prioridade) || (ehfila && ehpilha) || (ehpilha && ehfila_de_prioridade))
        {
            cout << "not sure" << endl;
        }
        else if (!ehfila&&!ehfila_de_prioridade&&!ehpilha)
        {
            cout<<"impossible"<<endl;
        }
        else if (ehfila)
        {
            cout<< "queue" << endl;
        }
        else if (ehpilha)
        {
            cout<<"stack"<<endl;
        }
        else if (ehfila_de_prioridade)
        {
            cout<<"priority_queue"<<endl;
        }
    }
    return 0;
}