#include <stdio.h>
 
int main() {
 
    int a, b;
    double t;
    scanf("%d %d", &a, &b);

    switch (a) {
        case (1): 
            t = 4 * b;
            break;
        case (2): 
            t = 4.5 * b;
            break;
        case (3): 
            t = 5 * b;
            break;
        case (4): 
            t = 2 * b;
            break;
        case (5):
            t = 1.5 * b;
            break;
        default: break;
    }
    
    printf("Total: R$ %.2f\n", t);

    return 0;
}