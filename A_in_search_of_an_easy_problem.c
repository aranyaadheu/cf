#include <stdio.h>

int main(){
    int n, i;
    int output;
    scanf("%d", &n);

    for(i=0; i<n;i++){
        scanf("%d", &output);

        if(output==1){
            printf("HARD\n");
            return 0;
        }

    }
    printf("EASY\n");
    return 0;

}