#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d", &a, &b);
    
    if (a <= b) {
        c = b - a;
    } else {
        c = 24 - a + b;
    }
    
    if (c == 0) {
        c = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", c);
    
    return 0;
}