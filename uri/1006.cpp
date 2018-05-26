#include <iostream>
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main() {
    double nota1, nota2, nota3, notafinal;

    std::cin >> nota1;
    std::cin >> nota2;
    std::cin >> nota3;
    notafinal = (((nota1 * PESO1) + (nota2 * PESO2) + (nota3 * PESO3)) / (PESO1+PESO2+PESO3));
    std::cout.precision(1);
    std::cout << "MEDIA" << " = " << std::fixed << notafinal << std::endl;
    return 0;
}