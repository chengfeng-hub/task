#include <stdio.h>
#include <string.h>
//struct book
//{
//	char title[20];
//	int  num;
//	char str[0];
//}book1;
int main()
{
	char str1[100];
	char str2[100];
	int  len;
//	book1.num=10;   
//    printf("%s",str);
//    strcpy( book1.title, "C Programming");
//	printf("%d",book1.num);	
//	printf("%s",book1.title);
	gets(str1);
//	scanf("%[^\n]",str);
	len=strlen(str1);
	for(int i=0;i<len;i++)
	{
		str2[len-1-i]=str1[i];
	}
	str2[len]='\0';
//	printf("%d",len);
	printf("\n%s",str2);
	return 0;
 } 
