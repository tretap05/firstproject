#include <stdio.h>
#include <stdbool.h>

void main(){

        float sum,bytes;
        
        printf("Please input your byte : ");
        scanf("%f",&bytes);

        if(bytes >= 1073741824){
            (sum = bytes / 1073741824);
            printf("Size : %.2f GB\n", sum);
        }else if(bytes >= 1048576){
            (sum = bytes / 1048576);
            printf("Size : %.2f MB\n", sum);
        }else if(bytes >= 1024){
            (sum = bytes / 1024);
            printf("Size : %.2f KB\n", sum);
        }else {
            (sum = bytes);
            printf("Size : %.2f Byte\n", sum);
        }        
        printf("Thank you\n");
    
}
