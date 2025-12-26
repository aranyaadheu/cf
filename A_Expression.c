#include <stdio.h>
/*  1+2*3=7
    1*(2+3)=5                        
    1*2*3=6
    (1+2)*3=9 */
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int n1, n2, n3, n4, n5;
    
    n1 = a + b * c;
    n2 = a * (b + c);
    n3 = a * b * c;
    n4 = (a + b) * c;
    n5 = a + b + c;
    
    int max = n1;
    if(n2 > max){
        max = n2;
    }
    
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;
    if(n5 > max) max = n5;
    
    printf("%d\n", max);
    
    return 0;
}