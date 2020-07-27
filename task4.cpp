#include <stdio.h>
int main()
{
    int N,M,K;
    int flag=0;
    scanf("%d %d %d",&N,&M,&K);
    int matrix[N][M];
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
      for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(K==matrix[i][j])
            {
                printf("Yes");
                flag++;
            }
           
        }
    }
    if(flag!=N*M)
    {
    	printf("No");
	}
    return 0;
}
