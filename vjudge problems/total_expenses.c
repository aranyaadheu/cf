#include <stdio.h>

int main(){
    int T, i; 
    scanf("%d", &T);

    for(i = 0; i < T; i++){
        int quantity, price;

        scanf("%d %d", &quantity, &price);

        float total_expense = (float)quantity * price;

        if(quantity > 1000){
            total_expense = total_expense - (total_expense * 0.10);
        }

        printf("%.6f\n", total_expense);

    }
    

    return 0;
}