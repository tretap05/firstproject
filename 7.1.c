#include <stdio.h>
#include <stdbool.h>

void main(){
       // Variable การประกาศศตัวเเปร

    char text;
    ///////////////////////////

    // short cut key สำหรับจัด format code shift + alt + f

    // Input

    printf("please enter number : ");
    scanf("%c",&text);
    //printf("Incorrect \n");
    
    while(text != '7')
    {
     
     scanf("%c",&text);
     printf("Incorrect\n");
     printf("please enter number : ");
     scanf("%c",&text);
     //printf("Incorrect\n");
     
     
    }
    //printf("Incorrect");
    // Process

    printf("Correct!!");
    
 }   