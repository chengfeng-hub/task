#include<iostream>
//#include <iomanip>
using namespace std;
void is_true(bool flag)
{
	if(flag==0)
		cout<<"false";
	else 
		cout<<"true";
}
int main()
{
	int num;
	cin>>num;
	int sum=num;
	long long num1[100],num2[100],num3[100];
	int flag;
	while(cin>>num1[sum-num]>>num2[sum-num]>>num3[sum-num])
	{	
		num--;
		if(num==0)  break;
	}
	for(int i=0;i<sum;i++)
	{
		flag = (num1[i]+num2[i])>num3[i];
		cout<<"Case #"<<i+1<<":";
		is_true(flag);
		cout<<endl;
	}
	
//	cout<<num2<<endl;	
//	int *num=new int();
//	string *ps = new string(2,'5');
//	cout<<num<<endl; 
//	cout<<*ps<<endl; 
//	cout<<setprecision(30)<<num2;
	return 0;
}

