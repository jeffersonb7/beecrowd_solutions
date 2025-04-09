#include <stdio.h>

int main() {
    int j;
    
    scanf("%d", &j);
    
    while (j != 0) {
        int dn;
        
        for (int i = 0; i < j; i++) {
            scanf("%d", &dn);
            
            int fim;
            
            if (dn % 2 == 0) {
                fim = 2;
            } else {
                fim = 1;
            }
            
            int meio = dn - fim;
            int t = fim + meio * 2;
            
            printf("%d\n", t);
        }
        
        scanf("%d", &j);
    }
    
    return 0;
}