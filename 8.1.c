#include <stdio.h>
#include <stdbool.h>

void main(){

    int num[3][3] = {
        {1,2},
        {4,5,6},
        {7,8,9},
    };

    for(int i = 0 ; i < 3 ; i++){

        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
    
    //for(int i = 2; i >= 0 ; i--){
      //  printf("%d ", num[i]);
    //}
    //printf("%d ",num[0]);
    //printf("%d ",num[1]);
    //printf("%d ",num[2]);

    //num[1] = 18;

    //printf("%d ",num[1]);
}