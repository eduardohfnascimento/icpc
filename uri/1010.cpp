#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    int cod1, cod2, quant1, quant2;
    float valor1, valor2, total;

    std::cin >> cod1 >> quant1 >> valor1;
    std::cin >> cod2 >> quant2 >> valor2;

    total = (quant1 * valor1) + (quant2 * valor2);

    std::cout.precision(2);
    std::cout << "VALOR A PAGAR: R$ " << std::fixed << total << std::endl;
    
    return 0; 
}