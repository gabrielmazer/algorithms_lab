#include <stdio.h>
#include <math.h>

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        int first = 1;
        for (int i = 1; i * i <= N; i++) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i * i);
            first = 0;
        }
        printf("\n");
    }
    return 0;
}