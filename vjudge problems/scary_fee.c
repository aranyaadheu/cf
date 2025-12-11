#include <stdio.h>

int main(){
    int X, C, yen, result;
    scanf("%d %d", &X, &C);
    yen = X * (C / 1000);
    result = X - yen;

    if(X >= C){
        printf("%d\n", result);
    } else{
        printf("0\n");
    }


    
    return 0;
}