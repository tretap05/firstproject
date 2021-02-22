#include <stdio.h>
#include <stdbool.h>

void main(){

    int num[5][9] = {
        {0,1,2,3,4,5,6,7,8},
        {9,10,11,12,13,14,15,16,17},
        {18,19,20,21,22,23,24,25,26},
        {27,28,29,30,31,32,33,34,35},
        {36,37,38,39,40,41,42,43,44},
        
    };

    printf("%d,   \n",num[0][0]);
    
    for(int i = 1; i <= 2 ; i++){
        printf("%d,    ", num[0][i]);
    }
    printf("\n");
    for(int i = 3; i <= 5 ; i++){
        printf("%d,    ", num[0][i]);
    }
    printf("\n");
    for(int i = 6; i <= 8 ; i++){
        printf("%d,    ", num[0][i]);
    }
    printf("%d,   \n",num[1][0]);
    for(int i = 1; i <= 5 ; i++){
        printf("%d,   ", num[1][i]);
    }
    printf("\n");
    for(int i = 6; i <= 8 ; i++){
        printf("%d,   ", num[1][i]);
    }
    for(int i = 0; i <= 2 ; i++){
        printf("%d,   ", num[2][i]);
    }
    printf("\n");
    for(int i = 3; i <= 8 ; i++){
        printf("%d,   ", num[2][i]);
    }
    printf("%d,   ", num[3][0]);
    printf("\n");
    for(int i = 1; i <= 8 ; i++){
        printf("%d,   ", num[3][i]);
    }
    printf("\n");
    for(int i = 0; i <= 8 ; i++){
        printf("%d,   ", num[4][i]);
    }
}