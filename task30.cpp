#include <stdio.h>
#include <string.h>



int main()
{
	
	char str[1000];

	while(gets(str))
	{
		int count[128]={0}; 	
		int max=0;
	  	for(int i=0;i<strlen(str);i++)
	    {
	            count[str[i]]++;
	            if(count[str[i]]>max)
	            {
	                max=count[str[i]];
	            }
	    }
	        while(max)
	        {
	            for(int i=0;i<128;i++)
	            {
	                if(count[i]==max)
	                {
	                    printf("%c",i);
	                }
	            }
	            max--;
	        }	
	        printf("\n");
	}
	return 0;
 } 

