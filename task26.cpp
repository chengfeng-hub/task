//#include <stdio.h>
// 
//int main(void){
// int   x,y;
// //�ȼ���x=10
// x   = 10, 11, 12; 
// 
// //��10,11,12��������ű��ʽ��ֵ��12�����ִ�и�ֵ����
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
 printf("\n������������ǣ�%s\n", pwd);
 return   0;
}
  
