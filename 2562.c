#include <stdio.h>

int main() {
    int arr[9], max, index;
    for (int i = 0; i < 9; i++) scanf("%d", &arr[i]);
    max = arr[0];
    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    }
    printf("%d\n%d\n", max, index);
}