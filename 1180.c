#include <stdio.h>

int main() {
    int n, num, menor, p;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (i == 0) {
            menor = num;
            p = 0;
        } else if (num < menor) {
            menor = num;
            p = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);

    return 0;
}
