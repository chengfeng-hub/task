#include<stdio.h>
int func(int m,int n)
{
 	if(m==0||n==0)
		return 1;
	return func(m,n-1)+func(m-1,n);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
    int value=func(m,n);
	printf("%d",value);    
	return 0;
} 
 
