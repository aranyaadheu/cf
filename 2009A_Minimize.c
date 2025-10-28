#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, c=0, count;
        scanf("%d %d", &a, &b);
        count = (c-a)+(b-c);
        printf("%d\n", count);
    }

    return 0;
}