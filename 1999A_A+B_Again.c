#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, num1, num2, sum;
        scanf("%d", &n);
        // n must be two digit int. 
        if(n >= 10 && n <= 99){
            num1 = n / 10;
            num2 = n % 10;
            sum = num1+num2;
            printf("%d\n", sum);     
        }

    }

    return 0;
}