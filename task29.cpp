#include <iostream>
using namespace std;


int main()
{
	int num;
	int sum=0;
	while(cin>>num)
	{
		for(int i=0;i<num;i++) 
			sum=i*3+2+sum;
	}
	cout<<sum<<endl;
	return 0;
}

