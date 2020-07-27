#include <iostream>
using namespace std;
int data[3]={0};
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 /*****************************************************************************
 Description   : 数据转换
 Input Param   : year 输入年份
                Month 输入月份
                Day 输入天
                    
 Output Param  :
 Return Value  : 成功返回0，失败返回-1（如：数据错误）
 *****************************************************************************/
int iConverDateToDay(int year, int month, int day)
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
 int getOutDay()
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
    printf("%d",day);
	return 0;
 }
int main()
{
	int year,month,day;
	int state;
	scanf("%d %d %d",&year,&month,&day);
	state=iConverDateToDay(year,month,day);
	if(state==0)
		printf("输入成功");
	else
	{
		cerr<<"error"<<endl;
		return 0;
	}
	state=getOutDay();
	if(state==0)
		printf("\n计算成功");
	else
	{
		printf("计算错误,请重新输入"); 
		return 0;
	}
	return 0;
 } 

 
