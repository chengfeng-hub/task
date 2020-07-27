#include <iostream>
using namespace std;
int main(){
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int *ptr = arr; //ptr指向6
//	*(ptr++) += 123;//先执行6+123，然后ptr指向7
//	printf("%d,%d\n", *ptr, *(++ptr));//先执行ptr+4使得ptr指向8，然后把ptr压栈2次
//	printf("%d,%d,%d,%d,%d\n", *ptr--,*ptr+20, *(ptr--), *ptr, *(++ptr));
	int i = 5;
//	char ch = 't';
//	char str[10] = "test";
//	printf("%s %c %d\n", str, ch, i);
	printf("%d %d %d %d\n", --i, --i,i--, i--);
	system("pause");
	return 0;
}

