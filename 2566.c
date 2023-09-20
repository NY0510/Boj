#include <stdio.h>

int main() {
    int arr[9][9], max, x, y;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    x = 1;
    y = 1;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }

    printf("%d\n%d %d", max, x, y);
    return 0;
}
