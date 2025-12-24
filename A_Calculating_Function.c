#include <stdio.h>

int func(int n){
    if(n%2==0){
        return n / 2;
    } else{
        return -(n + 1) / 2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", func(n));

    return 0;
}