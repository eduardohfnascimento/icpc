#include <iostream>
#include <string>
#include <cstdlib>
#define COMISSAO 0.15 

int main(){
    std::string nome;
    double salario, vendas, aReceber;

    std::cin >> nome;
    std::cin >> salario;
    std::cin >> vendas;

    aReceber = salario + (vendas * COMISSAO);

    std::cout.precision(2);
    std::cout << "TOTAL = R$ " << std::fixed << aReceber << std::endl;

    return 0;
}

