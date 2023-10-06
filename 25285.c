#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a][2];
    int c[a];
    for (int i = 0; i < a; i++) scanf("%d %d", &b[i][0], &b[i][1]);
    for (int i = 0; i < a; i++) {
        int height = pow(2, b[i][0]);
        int width = b[i][1];
        c[i] = width / height;
    }
}