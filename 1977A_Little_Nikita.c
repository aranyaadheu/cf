#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        if(m <= n && m % 2 == n % 2){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }

    return 0;
}