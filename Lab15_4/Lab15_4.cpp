#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define SIZE 10

int main() {
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));

    int x[SIZE];

    for (int i = 0; i < SIZE; i++) {
        x[i] = rand() % 100;
    }

    printf("Елементи масиву: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", x[i]);
    }

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += x[i];
    }

    printf("\nСума елементiв масиву: %d\n", sum);

    return 0;
}