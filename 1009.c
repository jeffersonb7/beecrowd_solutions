#include <stdio.h>
 
int main() {
    char nome[20];
    double s, t_s;
    
    scanf("%s", nome);
    scanf("%lf",  &s);
    scanf("%lf",  &t_s);
    
    double t = s + (t_s * 0.15);
    
    printf("TOTAL = R$ %.2f\n", t);
    
    return 0;
}