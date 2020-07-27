#include<iostream>
using namespace std;
 /*****************************************************************************
 Description   : 数据转换
 Input Param   : year 输入年份
                Month 输入月份
                Day 输入天
                    
 Output Param  :
 Return Value  : 成功返回0，失败返回-1（如：数据错误）
 *****************************************************************************/
int iConverDateToDay(int data[],int year, int month, int day)
{
     /* 在这里实现功能，将结果填入输入数组中*/ 
     data[0]=year;
     data[1]=month;
     data[2]=day;
     if(year<0||month<0||day<0||month>12)
     	return -1;
     return 0;
 }
 
 /*****************************************************************************
 Description   : 
 Input Param   :
                    
 Output Param  :
 Return Value  : 成功:返回outDay输出计算后的第几天;
                                           失败:返回-1
 *****************************************************************************/
 int getOutDay(int month[],int data[])
 {
 	int day=0;
 	while(data[1]-1)
 	{
	 	day+=month[data[1]];
		data[1]--;
	 }
    if(data[0]/4||data[0]/400)
    {
    	if(day>59)
    		day+=1;	
    }
    day+=data[2]; 
    //printf("%d",day);
	return day;
 }
int main()
{
	int year,mon,day;
	int state;
    int data[3]={0};
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&year,&mon,&day);
	state=iConverDateToDay(data,year,mon,day);
//	if(state==0)
//		printf("输入成功");
//	else
//	{
//		printf("\n输入错误,请重新输入"); 
//		return 0;
//	}
	state=getOutDay(month,data);
//	printf("%d %d %d\n",data[0],data[1],data[2]);
    printf("%d",state);
//	if(state==0)
//		printf("\n计算成功");
//	else
//	{
//		printf("计算错误,请重新输入"); 
//		return 0;
//	}
	return 0;
 } 

 
