
/*ʵ�ֹ��ܣ�ֻ�ܴ�1~X��������ѡ��С��ֻ��һ�γԵ�ÿ�������е�һ�������XΪ0��
��ֻ�ܴ�1~X-1��ѡ���Դ����ƣ����ܳԵ����ٱ��� 
����������������ӵĸ���������ÿ�����ӱ��ӵĸ��� 
������������صĳԵ����ӵĸ��� 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int data[num]; 
	int sum=0;
	int temp=num;
	int n;
	for(int i=0;i<num;i++)
	{
		cin>>data[i];
	}
	if(num==1)
		sum=data[0];
	else
	{
			while(temp)
			{
				n=0;
				for(int j=0;j<temp;j++)
				{
					if(data[j]==0)
					{
						temp=j;
						n++;
					}
				}
				if(temp==0)
					break;
				sum+=temp;
				for(int j=0;j<temp;j++)
				{
					data[j]-=1;	
				}
				
			}		
	}
	cout<<sum;
	return 0;
}

