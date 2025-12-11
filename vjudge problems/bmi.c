#include <stdio.h>

int main(){
    int T, i, bmi;
    scanf("%d", &T);

    for(i = 0; i < T; i++){
        int M, H, bmi;
        scanf("%d %d", &M, &H);
        bmi = M / (H * H);
        if(bmi <= 18){
            printf("1\n");
        } else if(bmi <= 24){
            printf("2\n");
        } else if(bmi <= 29){
            printf("3\n");
        } else{
            printf("4\n");
        }
    }

    

    return 0;
}