#include<iostream>
using namespace std;
class Solution {
public:
     int  NumberOf1(int n) {
     	int count=0;
         while(n)
         {
         	count++;
         	n=n&(n-1);
		 }
		 return count;
     }
};
int main()
{
	Solution s;
	int temp=s.NumberOf1(3);
	cout<<temp; 
	return 0;
}

