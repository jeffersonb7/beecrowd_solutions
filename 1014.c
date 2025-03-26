#include <stdio.h>

int main() {
    int dist;
    float c;
    
    scanf("%d %f", &dist, &c);
    
    printf("%.3f km/l\n", (dist / c));
    
    return 0;
}