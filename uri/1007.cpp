#include <iostream>

int main() {
    int A, B, C, D, diferenca;

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    diferenca = ((A*B) - (C*D));

    std::cout << "DIFERENCA" <<  " = " << diferenca << std::endl;
    
    return 0;
}