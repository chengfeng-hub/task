#include <stdio.h>
int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	int i=1;
	while((i%A!=0)||(i%B!=0))
	{
		i++;
	}
	printf("%d",i);
	return 0;
 } 
