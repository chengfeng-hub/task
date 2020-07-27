/*有关模板的使用*/
#include<iostream>
using namespace std;
template<typename T> 
T sum(T a,T b)
{
	return a+b;
}
int main()
{
	int a=5,b=6;
	int c=sum(a,b);
	cout<<c<<endl;
	system("pause");
	return 0;
}

