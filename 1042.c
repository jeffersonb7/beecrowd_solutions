#include <stdio.h>

int main() {
    int a, b, c;
    int temp;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int a1 = a;
    int b2 = b;
    int c3 = c;
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    printf("%d\n%d\n%d\n\n", a, b, c);
    
    printf("%d\n%d\n%d\n", a1, b2, c3);
    
    return 0;
}