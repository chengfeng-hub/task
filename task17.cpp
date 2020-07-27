#include <stdio.h>
int main()
{
	int N,M,K;
	int n=0;
	scanf("%d %d %d",&N,&M,&K);
	int num[N][M];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			scanf("%d",&num[i][j]);
		}
			
	}
	for(int i=N;i>0;i--)
	{
		for(int j=M;j>0;j--)
			{
				if(K>num[i][j])
				{
					continue;
				}
				else if(K==num[i][j])
				{
					n++;
				}
			
			}
	}
	if(n==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
