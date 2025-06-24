#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
            int a, b;
            scanf("%1d+%1d", &a, &b);
            printf("%d\n", a + b);
    }
    return 0;
}