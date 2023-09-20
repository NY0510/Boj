#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);
    int* arr = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("%d", max - min);

    return 0;
}