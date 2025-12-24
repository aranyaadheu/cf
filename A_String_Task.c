#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char ch[1000];
    scanf("%s", ch);
    
    for(int i = 0; ch[i] != '\0'; i++)
    {
        char lower = (char)tolower(ch[i]);
        if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u' || lower=='y')
        {   
            
        }
        else
        {
            printf(".%c", lower);
        }
    }    
    
    printf("\n");
    
    return 0;
}