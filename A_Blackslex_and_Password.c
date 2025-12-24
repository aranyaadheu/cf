#include <stdio.h>
// Codeforces Round 1071 (Div. 3)
// A	Blackslex and Password 
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int k, x;
        scanf("%d %d", &k, &x);
        
        int count = (k * x) + 1;
        printf("%d\n", count);
    }
    
    return 0;
}