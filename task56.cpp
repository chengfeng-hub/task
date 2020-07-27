#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int const *next=&x;
//	cout<<next<<endl;
	next++;
//	cout<<next<<endl;
	cout<<*next;
	return 0;
}

