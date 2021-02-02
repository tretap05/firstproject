#include <stdio.h>
#include <stdbool.h>

void main(){

        int sum,money;
        
        printf("Please input your money : ");
        scanf("%d",&money);

        if(money % 100 != 0){
            printf("Incorrect amount\n");
        }else if(money > 20000){
            printf("Limit 20000 bath\n");
        }else{
            (sum = 50000 - money);
            printf("Total : %d \n", sum);
        }        
        printf("Thank you\n");
    
}