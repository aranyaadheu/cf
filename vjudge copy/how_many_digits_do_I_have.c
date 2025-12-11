#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if(N <= 9){
        printf("1\n");
    } else if(N <= 99){
        printf("2\n");
    } else if(N <= 999){
        printf("3\n");
    } else {
        printf("More than 3 digits");
    }

    return 0;
}