#include <iostream>
using namespace std;
int data[3]={0};
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 /*****************************************************************************
 Description   : ����ת��
 Input Param   : year �������
                Month �����·�
                Day ������
                    
 Output Param  :
 Return Value  : �ɹ�����0��ʧ�ܷ���-1���磺���ݴ���
 *****************************************************************************/
int iConverDateToDay(int year, int month, int day)
 {
     /* ������ʵ�ֹ��ܣ��������������������*/ 
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
 Return Value  : �ɹ�:����outDay��������ĵڼ���;
                                           ʧ��:����-1
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
		printf("����ɹ�");
	else
	{
		cerr<<"error"<<endl;
		return 0;
	}
	state=getOutDay();
	if(state==0)
		printf("\n����ɹ�");
	else
	{
		printf("�������,����������"); 
		return 0;
	}
	return 0;
 } 

 
