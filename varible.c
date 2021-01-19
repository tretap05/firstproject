#include <stdio.h>
// ส่วนที่ 1 ส่วนการส่ง Library มาใช้

void main(){

// ส่วนที่ 2 การสร้าง Function หลัก

// =============== ตัวเเปล ===============

char username[20], email[50], password[20] ,repassword[20];
int phone[10];

// =============== ตัวเเปล ===============

// =============== การรับข้อมูล ===============

printf("Your username is:");
scanf("%s",&username);

printf("Your username is:");
scanf("%s",&email);

printf("Your username is:");
scanf("%s",&password);

printf("Your username is:");
scanf("%s",&repassword);

printf("Your username is:");
scanf("%d",&phone);


// =============== ตัวเเปล ===============

// =============== การเเสดงผมข้อมูล ===============

printf("Successs \n");
printf("Your username is : %s",&username);
return 0;
}