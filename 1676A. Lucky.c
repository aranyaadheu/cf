#include <stdio.h>
 
int main(){
    int t, n, m;
    scanf("%d", &t);
    while(t--){
        char string[7];
        scanf("%s", string);
        
        n = (string[0] - '0') + (string[1] - '0') + (string[2] - '0');
        m = (string[3] - '0') + (string[4] - '0') + (string[5] - '0');
        
        if(n==m){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    
    return 0;
}