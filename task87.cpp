#include<iostream>
using namespace std;
void sort(int *arr,int left,int right)
    {	
		if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    	{
       	 return ;
   		}
    	int key=arr[left];
    	int i=left;
    	int j=right;
    
    	while(i<j)
    	{
    		while(i<j&&arr[j]<=key)
    			j--;
			arr[i]=arr[j];
			while(i<j&&arr[i]>=key)
    			i++;
			arr[j]=arr[i];
		}
	
		arr[i]=key;
		sort(arr,left,i-1);
		sort(arr,i+1,right);
	}
int main()
{
	int num[3]={1,5,3};
	int count=0;
	sort(num,0,2);
	for(int i=0;i<1;i++)
	{
		int d=num[i]-num[i+1];
		if(d==(num[i+1]-num[i+2]))
		{
			count++;
		}
	}
	if(count==1)
		cout<<"此数列为等差数列"<<endl;
	else
		cout<<"此数列不是等差数列"<<endl;
	return 0;
}

