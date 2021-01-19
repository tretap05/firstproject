
#include <stdio.h>
// ส่วนที่ 1 ส่วนการส่ง Library มาใช้

void main() {

// ส่วนที่ 2 การสร้าง Function หลัก

// =============== ตัวเเปล ===============

char Student_code[20], First_name[20], last_name[20], age[5], username[20], password[20], repassword[20], email[50], weight[10], Height[10];
int phone;

// =============== ตัวเเปล ===============

// =============== การรับข้อมูล ===============

printf("Your Student code is : ");
scanf("%s",&Student_code);

printf("Your First name is : ");
scanf("%s",&First_name);

printf("Your last name is : ");
scanf("%s",&last_name);

printf("Your age is : ");
scanf("%s",&age);

printf("Your username is : ");
scanf("%s",&username);

printf("Your password is : ");
scanf("%s",&password);

printf("Your repassword is : ");
scanf("%s",&repassword);

printf("Your email is : ");
scanf("%s",&email);

printf("Your weight is : ");
scanf("%s",&weight);

printf("Your Height is : ");
scanf("%s",&Height);

printf("Your phone is : ");
scanf("%d",&phone);

// =============== ตัวเเปล ===============

// =============== การเเสดงผมข้อมูล ===============

printf("Successs \n");
printf("You username is : %s \n",&username);
printf("You password is : %s \n",&password);

return 0;

}
