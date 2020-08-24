#include<iostream>
using namespace std;
int walk_way(int num)
{
	if(num==1)
		return  1;
	else if(num==2)
		return 2;
	else
		return walk_way(num-1)+walk_way(num-2);
}
int main()
{
	int num=walk_way(3);
	cout<<num;
	return 0;
}

