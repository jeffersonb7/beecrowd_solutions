#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        int f1, f2;
        scanf("%d %d", &f1, &f2);

        int a = f1, b = f2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        printf("%d\n", a);
        n--;
    }

    return 0;
}
