#include<iostream>
using namespace std;
int main()
{
	int num;
	int i=0;
	cin>>num;
	int array[100];
	int temp = num;
	while(num--)
	{
		cin>>array[i];
		i++;
	}
	for(i=0;i<temp;i++)
		cout<<array[i]<<endl;
	return 0;
}

