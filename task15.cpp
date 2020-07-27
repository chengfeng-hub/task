#include <stdio.h>
#define max 10000


int main()
{
	int M,N;
	int num,count=0,j=0;
	int  p[max]={0};
	scanf("%d %d",&M,&N);
	if(M<0||M>10000||N<0||N>10000)
	{
		printf("error");
		return -1;
	}
	if(M>N)
	{
		printf("input error");
		return -1;
	}
	num=2;
	while(num>=2&&num<=10000)	
	{
		for(int i=2;i<num;i++)
		{
			if(num%i!=0)
			{
				count++;
			}
			
		}
		if(count==num-2)
		{
//			printf("%d\n",num);
			p[j]=num;
			j++;
		}		
		num++;
		count=0;
	}
	for(int i=M;i<=N;i++)
	{
		printf("%d ",p[i]);
	}
	
	return 0;
}
