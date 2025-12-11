#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d", N*(++M));

    return 0;
}