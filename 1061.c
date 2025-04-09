#include <stdio.h>

int main() {
    int dia_inicial, dia_final;
    int hora_incial, minuto_inicial, segundo_inicial;
    int hora_final, minuto_final, segundo_final;

    scanf("Dia %d", &dia_inicial);
    scanf("%d : %d : %d", &hora_incial, &minuto_inicial, &segundo_inicial);
    scanf(" Dia %d", &dia_final);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    int total_segundo_inicial = dia_inicial * 86400 + hora_incial * 3600 + minuto_inicial * 60 + segundo_inicial;
    int total_segundo_final = dia_final * 86400 + hora_final * 3600 + minuto_final * 60 + segundo_final;

    int d = total_segundo_final - total_segundo_inicial;

    int dias = d / 86400;
    d %= 86400;

    int h = d / 3600;
    d %= 3600;

    int m = d / 60;
    int s = d % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}
