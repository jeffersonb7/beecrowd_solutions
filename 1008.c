#include <stdio.h>
 
int main() {
 
    int a, b; 
    double c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", (c*b));

    return 0;
}