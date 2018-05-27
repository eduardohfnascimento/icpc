#include <iostream>
#include <cstdlib>


int main() {
    int id, horasTrabalhadas;
    float salarioHora, salario;

    std::cin >> id;
    std::cin >> horasTrabalhadas;
    std::cin >> salarioHora;

    salario = salarioHora * horasTrabalhadas;
    std::cout << "NUMBER = " << id << std::endl;
    std::cout.precision(2);
    std::cout << "SALARY = U$ " << std::fixed << salario << std::endl;

    return 0;
}