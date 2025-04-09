#include <stdio.h>

int main() {
    float n, sum = 0;
    int p = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            sum += n;
            p++;
        }
    }

    printf("%d valores positivos\n", p);
    if (p > 0) {
        printf("%.1f\n", sum / p);
    }

    return 0;
}
