#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
            break;

        int s = 0;
        int inicio = m < n ? m : n;
        int fim = m > n ? m : n;

        for (int i = inicio; i <= fim; i++) {
            printf("%d ", i);
            s += i;
        }

        printf("Sum=%d\n", s);
    }

    return 0;
}
