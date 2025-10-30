#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, sum;
        scanf("%d", &n);
        sum = n*2;
        
        // equal amount of berries and sugar
        // 2kg berries 2 kg sugar
        // 2kg berry 2 kg sugar
        // you will not get 4 kg jam, 3kg
        // 0.25
        // 2+2 * 0.25/ 
        if(n>=1){
            
            printf("%d\n", sum);
        }
        
    }

    return 0;
}