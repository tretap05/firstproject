#include <stdio.h>
#include <stdbool.h>

void main()
{

    // Variable การประกาศศตัวเเปร

    char text;
    ///////////////////////////

    // short cut key สำหรับจัด format code shift + alt + f

    // Input

    printf("please enter key (x) to exit \n");
    scanf("%c",&text);
    // Input

    // Process

    while (text != 'x'){

        scanf("%c",&text);
    }
    // Process

    printf("Exit Program!!");

}