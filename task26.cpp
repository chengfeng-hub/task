//#include <stdio.h>
// 
//int main(void){
// int   x,y;
// //先计算x=10
// x   = 10, 11, 12; 
// 
// //（10,11,12）这个逗号表达式的值的12，最后执行赋值运算
// y   = (10,11,12); 
// 
// printf("x=%d\n",   x);
// printf("y=%d\n",   y);
// return   0;
//}
//
#include<conio.h>
#include<stdio.h>
 
int main(void)
{
 char   pwd[32];
 int   ch;
 int   i = 0;
 while   (1) {
 ch   = getch();
 if   (ch == '\r') {
 break;
 }
 pwd[i]   = ch;
 i++;
 putch('*');
 }
 pwd[i]   = 0;
 printf("\n您输入的密码是：%s\n", pwd);
 return   0;
}
  
