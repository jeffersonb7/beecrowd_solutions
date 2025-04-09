#include <stdio.h>

int main() {
    float p, t = 0.0;
    int c = 0;

    while (c < 2) {
        scanf("%f", &p);

        if (p >= 0.0 && p <= 10.0) {
            t += p;
            c++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", t / 2);
    return 0;
}
