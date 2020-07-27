#include <stdio.h>
#include <malloc.h>
int main()
{
	unsigned char* mem_ptr = NULL;
	unsigned int mem_size=128;
	mem_ptr =(unsigned char*) malloc(mem_size);
	printf("%p\n",mem_ptr);
	

	  if(mem_ptr != NULL)
        {
			
            printf("access %d bytes memory success!\r\n", mem_size);
            free(mem_ptr);
            mem_ptr = NULL;
            printf("free memory success!\r\n");
           
        }
        else
        {
            printf("BearPi: access %d bytes memory failed!\r\n", mem_size);
            return 0;
        }
	return 0 ;
 } 
