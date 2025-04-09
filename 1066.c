#include <stdio.h>

int main() {
    int v;
    int par = 0, impar = 0, p = 0, n = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &v);

        if (v % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        if (v > 0) {
            p++;
        } else if (v < 0) {
            n++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);

    return 0;
}
