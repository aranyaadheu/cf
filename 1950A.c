#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a<b){
            if(b<c){
                printf("STAIR\n");
            } 
        }
        else{
            printf("NONE\n");
        }
        if(a<b){
            if(b>c){
                printf("PEAK\n");
            }
        }
    }

    return 0;
}