/*Princípio de Demeter - código bom*/

#include <stdio.h>

typedef struct {
    int id;
} Item;

typedef struct {
    Item item;
} Container;

int getItemId(Container* container) {
    return container->item.id;
}

int main() {
    Container container;
    container.item.id = 10;

    int id = getItemId(&container);
    printf("Item ID: %d\n", id);

    return 0;
}