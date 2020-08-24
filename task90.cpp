#include<iostream>
using namespace std;
int hanoi(int n,char A,char B,char C)
{
	static int count=0;
	if(n==1)
//		printf("%c-> %c\n",A,C);
		count++;
	else
	{
		hanoi(n-1,A,C,B);
//		printf("%c->%c\n",A,C);
		count++;
		hanoi(n-1,B,A,C);
	}
	return count;
}
int main()
{
	int temp=hanoi(30,'A','B','C');
	cout<<temp;
	return 0;
}

