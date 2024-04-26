/*Princípio Aberto-Fechado - código ruim*/

#include <stdio.h>

typedef struct {
    float price;
} Product;

float calculateTotalPrice(Product *products, int numProducts) {
    float totalPrice = 0.0f;

    for (int i = 0; i < numProducts; i++) {
        totalPrice += products[i].price;
    }
    return totalPrice;
}

typedef struct {
    float price;
    float discount;
} DiscountProduct;

float calculateTotalPriceWithDiscount(DiscountProduct *products, int numProducts) {
    float totalPrice = 0.0f;

    for (int i = 0; i < numProducts; i++) {
        float discountedPrice = products[i].price * (1.0f - products[i].discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    Product products[] = {{10.0f}, {20.0f}, {30.0f}};

    int numProducts = sizeof(products) / sizeof(products[0]);
    printf("Total price: %.2f\n", calculateTotalPrice(products, numProducts));

    DiscountProduct discountProducts[] = {{10.0f, 0.1f}, {20.0f, 0.2f}, {30.0f, 0.3f}};
    
    int numDiscountProducts = sizeof(discountProducts) / sizeof(discountProducts[0]);
    printf("Total price with discount: %.2f\n", calculateTotalPriceWithDiscount(discountProducts, numDiscountProducts));

    return 0;
}