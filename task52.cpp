
/*实现功能：只能从1~X个盘子中选择，小王只能一次吃掉每个盘子中的一个，如果X为0，
则只能从1~X-1中选择，以此类推，看能吃掉多少饼子 
输入参数：输入盘子的个数，输入每个盘子饼子的个数 
输出参数：返回的吃掉饼子的个数 
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

