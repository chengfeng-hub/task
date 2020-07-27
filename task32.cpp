#include<stdio.h>
int main()
{
	int num ;
	scanf("%d",&num);
	int data[num];
	int result[num]={0};
	int value=0;
	int max=1;
	int min;
	for(int i=0;i<num;i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0;i<num;i++)
	{
		if(max<data[i])
		{
			max=data[i];
		}
	}
	for(int i=0;i<num;i++)
	{
		min=data[i];
		
	    while(min<=max)
	    {
			if(min<max)
			{
				for(int j=i;j<num;j++)
		    	{
		    		if(min==data[j])
					{
						min=data[j];
						result[i]++;
						break;
					}
				}
			}
			if(min==max)
			{
				result[i]++;
				break;
			}				
			min++;
			
		}
			
	
	}


	for(int i=0;i<num;i++)
	{
		if(result[i]>value)
		{
			value=result[i];
		}
	}
	printf("%d",value);
	return 0;
 } 
