#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	int i=0,j=0,k=0;
	double value;
	int number[100];
	while(cin>>num)
	{	
		if(num<0)
		{
			i++;
			num=0;
		}		   
		else
		{
		   j++;
		   number[j-1]=num;
		}  
	
	}

    while(k<j)
    {
    	sum+=number[k];
    	k++;
	}
	value=(double)sum/j;
	cout<<value<<endl;
	return 0;
}
