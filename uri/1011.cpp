#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h> 
#define PI 3.14159

int main() {
    int raio;
    double volume;

    std::cin >> raio;

    volume = (4.0 / 3) * PI * pow(raio, 3);

    std::cout.precision(3);
    std::cout << "VOLUME = " << std::fixed << volume << std::endl;
    return 0;
}