#include<iostream>
using namespace std;
class Solution {
public:
    int rectCover(int number) {
		if(number<1)
			return 1;
		else if(number==2|number==1)
			return number;
		else
			return rectCover(number-1)+ rectCover(number-2);
    }
};
int main()
{
	Solution s;
	int temp=s.rectCover(5);
	cout<<temp;
	return 0;
}

