#include<iostream>
using namespace std;
int main()
{
	int data[5]={6,1,1,1,0};
	int sum=0;
	for(int i=0;i<5;i++)
		sum+=data[i];
	int count=sum/3;
	do
	{
		int temp1=count-data[0];
		if(temp1>0)
		{
			if(data[1]>temp1)
			{
				data[0]+=temp1;
				data[2]+=data[1]-temp1;
			}
			else
				data[0]+=data[1];
		}	
		else
			data[2]+=data[1];
		int temp2=count-data[4];
		if(temp2>0)
		{
			if(data[3]>temp2)
			{
				data[4]+=temp2;
				data[2]+=data[3]-temp2;
			}
			else
				data[4]+=data[3];
		}	
		else
			data[2]+=data[3];
		if(data[2]==count)
			cout<<count;
		else
			cout<<min(min(data[0],data[2]),data[4]);
	}while(0);

	return 0;
}

