/*Princípio da responsabilidade única - código bom*/

#include <stdio.h>
#include <stdlib.h>

float calcularAreaRetangulo(float base, float altura) {
    return base * altura;
}

float calcularPerimetroRetangulo(float base, float altura) {
    return 2 * (base + altura);
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

    area = calcularAreaRetangulo(base, altura);
    perimetro = calcularPerimetroRetangulo(base, altura);

    exibirResultados(base, altura, area, perimetro);

    return 0;
}