/* 1เขียนโปรเเกรมตัดเกรดเเบบง่าย */
// กรอกคะเเนน 75 = เกรดเท่าไหร

#include <stdio.h>
// Import Library

int main(){

    //=========================== Variable ===========================//
        float score;
    //=========================== Variable ===========================//

    //=========================== Input ==============================//
        printf("Please input your score:");
        scanf("%f",score);
    //=========================== Input ==============================//

    //=========================== Process ============================//
        if(score >= 80){
            printf("Grade A!!");
        }else if (score >= 70){
            printf("Grade B!!");
        }else if (score >= 60){
            printf("Grade C!!");
        }else if (score >= 50){
            printf("Grade D!!");
        }else{ 
            printf("Grade F!!");
        }
        
    //=========================== Process ============================//
         
        
    return 0 ;


}