#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct foo {char food[100]; float price; float weight;};

void printStruct(struct foo * x) {
    printf("%s cost %0.2f and weigh %0.2f\n", x->food, x->price, x->weight);
}

struct foo * makeStruct(char *food, float price, float weight) {
    struct foo *x = malloc(sizeof(struct foo));
    strcpy(x->food, food);
    x->price = price;
    x->weight = weight;
    return x;
}

int main() {
    srand(time(NULL));

    struct foo *apples = makeStruct("apples", rand() % 20 + 5 + (rand() % 99)/ 100.0, rand() % 5 + 5 + (rand() % 99) / 100.0);
    printStruct(apples);
    free(apples);
    return 0;
}
