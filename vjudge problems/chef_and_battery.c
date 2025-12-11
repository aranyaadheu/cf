#include <stdio.h>

int main(){
    int T, i;
    scanf("%d", &T);
    
    for(i=0; i<T; i++){
        int N, m = 0, result = 0, FR = 0;
        scanf("%d", &N);
        if(N==50){
            printf("0\n");
        }
        else if(N>50){
            if(N-50 % 2 == 0){
                m = (N - 50);
                FR = m/2;
                printf("%d\n", FR);
            }
            
            else if((N-50) % 3 == 0){   
                m = (N-50) / 3;
                printf("%d\n", m);
            }
            else{
                m = (N-50) / 3;
                result = (N - 50) % 3;
                FR = m + (result * 2);
                printf("%d\n", FR);
            }
        
        }
        else {
            if((50 - N) % 2 == 0){
                FR = (50-N)/2;
                printf("%d\n", FR);
            }
            else{
                FR = ((50-N) / 2) + 3;
                printf("%d\n", FR);
            }
        }

    }
    
    return 0;
}