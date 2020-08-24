#include<iostream>
using namespace std;
class Solution {
public:
    int cutRope(int number) {
    	int n1=number/3;
    	int n2=number%3;
    	int sum=1;
    	for(int i=0;i<n1-1;i++)
    	{
    		sum*=3;
		}
		if(n2==1)
			sum*=(3+1);
		else if(n2==2)
			sum*=n2*3;
		else
			sum*=3;
		return sum;
    }
};
int main()
{
	Solution s;
	int temp;
	temp=s.cutRope(16);
	cout<<temp<<endl;

	return 0;
}

