#include<iostream>
#include<vector>
using namespace std;
//int f()
//{
//	int *a=new int[3];
//	cout<<a[1];
//	return *a;
//}
//int *f()
//{
//	int a[3]={1,2,3};
//	int *p;
//	return a;
//}
vector<int> f()
{
	vector<int> v(3);
	return v;
}
int main()
{
	f();
	return 0;
}

