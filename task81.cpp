#include<iostream>
using namespace std;
void sort(int *data,int left,int right)
{
	if(left>=right)
	{
		return ;
	}
	int key=data[left];
	int i=left;
	int j=right;

	while(i<j)
	{
		while(i<j&&key<=data[j])
		{
			j--;
		}		
		data[i]=data[j];
		while(i<j&&key>=data[i])
		{
			i++;
		}
		data[j]=data[i];	
	}
	data[i]=key;
	sort(data,left,i-1);
	sort(data,i+1,right);
}
int main()
{
	int data[10]={9,5,6,7,8,4,2,1,3,0};
	sort(data,0,9);
	for(int i=0;i<10;i++)
		cout<<data[i]<<endl;
	return 0;
}

