#include <stdio.h>
// import library
#include <stdbool.h>

void main(){

    // =============== ประกาศตัวแปร =============== //
    int num1 ,num2 ,sum;
    float result;
    bool total[10];

    // ตัวแปรเเบบ boolean จะเก็บข้อมูลได้เเค่ 2 ค่า true(1) และ false (0) 

    // =========================================== //

    // =============== Input =============== //
    //printf("Input num 1 :");
    //scanf("%d",&num1);
    //printf("Input num 2 :");
    //scanf("%d",&num2); 
    // ===================================== //

    // =============== Process การดำเนินการทางคณิตศาสตร์ =============== //
        //result = num1 + num2;
        //result = 5 * 10 / 2 + 6 * 8 + (20 - 15);
        //total[0] = 2 > 1 ;
        // shift + olt + arrow down
        total[4] = !((3 < 5) && (6 >= 7)) ;
        total[5] = !((3 <= 20) || (6 > 9)) ;
        total[6] = 5;
        total[6] += 10; // total[6] = total[6] + 10;
 
        
    // ============================================================== //

    // =============== Input =============== //
        //printf("Total 1 : %d \n", total[0]);
        //printf("Total 2 : %d \n", total[1]);
        //printf("Total 3 : %d \n", total[2]);
        //printf("Total 4 : %d \n", total[3]);
        //printf("Total 5 : %d \n", total[4]);
        //printf("Total 6 : %d \n", total[5]);
        printf("Total 7 : %d \n", sum);

    // ===================================== //

}