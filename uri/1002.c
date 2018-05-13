#include <stdio.h>
 
int main() {
 
    double raio;
		double pi = 3.14159;
		//printf("Digite dois numeros\n");
		scanf(" %lf", &raio);

		double X  = pi * (raio * raio);

		printf("A=%.4lf\n", X);
 
    return 0;
}