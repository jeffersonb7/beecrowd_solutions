#include <stdio.h>

int main() {
    int p = 0;
    for (int i = 0; i < 6; i++) {
        double n;
        scanf("%lf", &n);
        if (n > 0) {
            p++;
        }
    }
    
    printf("%d valores positivos\n", p);
    return 0;
}
