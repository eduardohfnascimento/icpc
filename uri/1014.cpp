#include <iostream>
#include <cstdlib>

int main() {
    int distancia;
    double combustivel;

    std::cin >> distancia;
    std::cin >> combustivel;

    double totalgasto = distancia/combustivel;

    std::cout.precision(3);
    std::cout << std::fixed << totalgasto << " km/l" << std::endl;

    return 0;
}