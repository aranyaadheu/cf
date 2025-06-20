#include <stdio.h>

int main(void){
    int melon;
    scanf("%d", &melon);
    if(melon % 2 == 0 && melon >= 4){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}
