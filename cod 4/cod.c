/*Princípio Aberto-Fechado - código bom*/

#include <stdio.h>

typedef struct {
    float (*calculatePrice)(void *product);
} Product;

typedef struct {
    Product base;
    float price;
} NormalProduct;

float calculateNormalProductPrice(void *product) {
    NormalProduct *normalProduct = (NormalProduct *)product;

    return normalProduct->price;
}

typedef struct {
    Product base;
    float price;
    float discount;
} DiscountProduct;

float calculateDiscountProductPrice(void *product) {
    DiscountProduct *discountProduct = (DiscountProduct *)product;

    return discountProduct->price * (1.0f - discountProduct->discount);
}

int main() {
    NormalProduct normalProducts[] = {{{calculateNormalProductPrice}, 10.0f}, {{calculateNormalProductPrice}, 20.0f}, {{calculateNormalProductPrice}, 30.0f}};
    int numNormalProducts = sizeof(normalProducts) / sizeof(normalProducts[0]);

    float totalPrice = 0.0f;

    for (int i = 0; i < numNormalProducts; i++) {
        totalPrice += normalProducts[i].base.calculatePrice(&normalProducts[i]);
    }

    printf("Total price of normal products: %.2f\n", totalPrice);

    DiscountProduct discountProducts[] = {{{calculateDiscountProductPrice}, 10.0f, 0.1f}, {{calculateDiscountProductPrice}, 20.0f, 0.2f}, {{calculateDiscountProductPrice}, 30.0f, 0.3f}};
    int numDiscountProducts = sizeof(discountProducts) / sizeof(discountProducts[0]);

    totalPrice = 0.0f;

    for (int i = 0; i < numDiscountProducts; i++) {
        totalPrice += discountProducts[i].base.calculatePrice(&discountProducts[i]);
    }
    
    printf("Total price of discount products: %.2f\n", totalPrice);

    return 0;
}
