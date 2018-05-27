#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h> 
#define PI 3.14159

int main() {
    double A, B, C;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    triangulo = (A * C) / 2;
    circulo = PI * pow (C, 2);
    trapezio = ((A + B) * C) / 2;
    quadrado = pow (B, 2);
    retangulo = A * B;

    std::cout.precision(3);
    std::cout << "TRIANGULO: " << std::fixed << triangulo <<  std::endl;
    std::cout << "CIRCULO: " << std::fixed << circulo <<  std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << trapezio <<  std::endl;
    std::cout << "QUADRADO: " << std::fixed << quadrado <<  std::endl;
    std::cout << "RETANGULO: " << std::fixed << retangulo <<  std::endl;

    return 0;
}
