#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class Solution {
public:
    double Power(double base, int exponent) {
    	double sum=1;
    	if((fabs(base - 0) < 0.00000001)&&exponent==0)
    		return 0;
    	else
    	{
//    		while(exponent)
//    		{
//    			sum*=base;
//    			exponent--;
//			}
			sum=pow(base,exponent);
			return sum;
		}
    }
};
int main()
{
	Solution s;
	double sum=s.Power(1.05,5);
	cout<<sum<<endl;
	return 0;
}

