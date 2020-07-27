#include <iostream>
#include <math.h>
using namespace std;
class Solution{
	public:
		int cutRope(int number)
		{
			int m=number-1;  //段数 
			int max=number;   //最大值 
			int sum;
			while(m!=1)
			{
				sum=pow((number/m),m-number%m)*pow((number/m)+1,number%m);
				if(sum>max)
				{
					max=sum;
				}
				m--;
				
			}
			return max;
		
		}
};
int main()
{
	Solution *Rope; 
	Rope = new Solution ;
	int value;
	int num;
	cin>>num;
	value = Rope->cutRope(num);
	cout<<value;

	return 0;
 } 
