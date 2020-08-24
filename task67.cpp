#include<iostream>
#include<string>
#include <sstream> 
using namespace std;
string int2str(int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}
int main()
{
	int num;
	cin>>num;
	int sum=0;
	string str;
	while(num)
	{
		int i=0;
		str=int2str(num);
		while(i<str.size())
		{
			if(str[i]=='1')
				sum++;
			i++;
		}
		num--;
	}
	
	cout<<sum;
	return 0;
}

