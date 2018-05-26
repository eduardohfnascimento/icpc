#include <iostream>
#define PESO1 3.5
#define PESO2 7.5

int main() {
    double nota1, nota2, notafinal;

    std::cin >> nota1;
    std::cin >> nota2;
    notafinal = (((nota1 * PESO1) + (nota2 * PESO2)) / 11);
    std::cout.precision(5);
    std::cout << "MEDIA" << " = " << std::fixed << notafinal << std::endl;
    return 0;
}