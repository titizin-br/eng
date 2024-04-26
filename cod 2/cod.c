/*Princípio de Demeter - código ruim*/

#include <stdio.h>

typedef struct {
    int id;
} Item;

typedef struct {
    Item item;
} Container;

Item* getInnerItem(Container* container) {
    return &(container->item);
}

int getItemId(Container* container) {
    return getInnerItem(container)->id;
}

int main() {
    Container container;
    container.item.id = 10;

    int id = getItemId(&container);
    printf("Item ID: %d\n", id);

    return 0;
}