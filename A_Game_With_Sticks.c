#include <stdio.h>
 
int main()
{
    int n, m, count=0;
    scanf("%d %d", &n, &m);
    
    while(n > 0 && m > 0){
        n--;
        m--;
        count++;
    }
    
    if(count%2==0){
        printf("Malvika\n");
    }
    else{
        printf("Akshat\n");
    }
    
    return 0;
}