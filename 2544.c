#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        int c = 0;
        
        while (n > 1) {
            n /= 2;
            c++;
        }
        
        printf("%d\n", c);
    }
    
    return 0;
}