#include<iostream>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {
    	if(number==1)
    		return 1;
    	else
	    	return 2*jumpFloorII(number-1);
    }
    int num;
    int sum;
};         
int main()
{
	Solution s;
	s.sum=0;
	cin>>s.num;
	s.sum = s.jumpFloorII(s.num);
	cout<<s.sum;
	return 0;
}

