#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b, count, now;
        scanf("%d %d", &a, &b);
        count = a % b;
        now = b - count;

        if(a % b == 0){
            printf("0\n");
        } else{
            printf("%d\n", now);
        }
    }
    

    return 0;
}