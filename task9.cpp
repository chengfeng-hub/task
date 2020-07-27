#include <stdio.h> 
struct stu
{
int number;
char name[10];
struct stu *next;
};
int main()
{
	struct stu s;
	double *p;
	printf("%d",sizeof(s));
	getchar();
	return 0;

}
