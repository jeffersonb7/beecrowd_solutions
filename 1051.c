int main() {
    double s, t = 0.0;
    
    scanf("%lf", &s);
    
    if (s > 4500.00) {
        t += (s - 4500.00) * 0.28;
        s = 4500.00;
    }
    if (s > 3000.00) {
        t += (s - 3000.00) * 0.18;
        s = 3000.00;
    }
    if (s > 2000.00) {
        t += (s - 2000.00) * 0.08;
    }
    
    if (t == 0.0) {
        printf("Isento\n");
    } else {
        printf("R$ %.2lf\n", t);
    }
    
    return 0;
}