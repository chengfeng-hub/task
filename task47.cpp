#include<iostream>
using namespace std;
typedef int Integer;
void sortIntegerArray(Integer pIntegerArray[], int iSortFlag,int len);
int main()
{
	int num;
	int flag;
	cin>>num;
	int data[num];
	for(int i=0;i<num;i++)
	{
		cin>>data[i];
	}
	cin>>flag;
	sortIntegerArray(data,flag,num);
	return 0;
}
void sortIntegerArray(Integer pIntegerArray[], int iSortFlag,int len)
{
	int temp,i;
	if(iSortFlag==1)
	{
		for(i=0;i<len;i++)
		{
			for(int j=0;j<len-i-1;j++)
			{
				if(pIntegerArray[j]<pIntegerArray[j+1])
				{	
					temp=pIntegerArray[j];
					pIntegerArray[j]=pIntegerArray[j+1];
					pIntegerArray[j+1]=temp;
				}
			}
		}
		for(i=0;i<len-1;i++)
			cout<<pIntegerArray[i]<<' ';
        cout<<pIntegerArray[i]<<endl;
	}
	else
	{
		for(i=0;i<len;i++)
		{
			for(int j=0;j<len-i-1;j++)
			{
				if(pIntegerArray[j]>pIntegerArray[j+1])
				{	
					temp=pIntegerArray[j];
					pIntegerArray[j]=pIntegerArray[j+1];
					pIntegerArray[j+1]=temp;
				}
			}
		}
		for(i=0;i<len-1;i++)
			cout<<pIntegerArray[i]<<' ';
        cout<<pIntegerArray[i]<<endl;
	}

}
