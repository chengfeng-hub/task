#include<iostream>
using namespace std;
class Solution {
public:
    int jumpFloor(int number) {
        if(number==1)
        	return 1;
        else if(number==2)
        	return 2;
        else
        	return jumpFloor(number-1)+jumpFloor(number-2);
    }
};
int main()
{
	return 0;
}

