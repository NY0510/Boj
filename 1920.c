#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    int arr1[N];
    for (int i; i < N; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &M);
    int arr2[M];
    for (int i; i < M; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i; i < M; i++) {
        for (int j; i < N; j++) {
            printf("%d %d", arr2[i], arr1[j]);
        }
    }

    return 0;
}