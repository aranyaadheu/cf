#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    while(T--){
        int N, time = 0;
        scanf("%d", &N);
        if(N==50){
            printf("0\n");
            continue;
        }

        while(N != 50){
            if(N>50){
                N -= 3;
            } 
            else {
                N += 2;
            }
            time++;
        }
        printf("%d\n", time);

    }

    return 0;
}