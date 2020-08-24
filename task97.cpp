#include<iostream>
using namespace std;
class Solution {
public:
    int Fibonacci(int n) {
		if(n==1|n==2)
			return 1;
		else
			return Fibonacci(n-1)+ Fibonacci(n-2);
    }
};
int main()
{
	return 0;
}

