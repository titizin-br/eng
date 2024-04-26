/*Princípio da responsabilidade única - código ruim*/

#include <stdio.h>
#include <stdlib.h>

void calcularRetangulo(float base, float altura, float *area, float *perimetro) {
    *area = base * altura;
    *perimetro = 2 * (base + altura);
}

void exibirResultados(float base, float altura, float area, float perimetro) {
    printf("Base: %.2f\n", base);
    printf("Altura: %.2f\n", altura);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
}

int main() {
    float base;
    float altura;
    float area;
    float perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    calcularRetangulo(base, altura, &area, &perimetro);

    exibirResultados(base, altura, area, perimetro);

    return 0;
}
