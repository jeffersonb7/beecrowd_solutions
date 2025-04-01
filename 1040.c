#include <stdio.h>

int main() {
    double n1, n2, n3, n4;
    double avg;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    
    printf("Media: %.1lf\n", avg);
    
    if (avg >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (avg < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        
        double nota;
        scanf("%lf", &nota);
        
        printf("Nota do exame: %.1lf\n", nota);
        
        avg = (avg + nota) / 2;
        
        if (avg >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", avg);
    }
    
    return 0;
}