#include <stdio.h>

int main()
{
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    int max = x1;
    if(x2 > max) max = x2;
    if(x3>max) max = x3;
    int min = x1;
    if(x2 < min) min = x2;
    if(x3 < min) min = x3;

    printf("%d\n", max - min);

    return 0;
}