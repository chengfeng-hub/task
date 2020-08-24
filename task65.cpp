#include<iostream>
#include<stack> 
using namespace std;
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
       
    }
    int pop() { 
	    if(stack2.empty())
	    {
			while(!stack1.empty())
	   		{    
	        	stack2.push(stack1.top());
	        	stack1.pop();
	 		}
		} 
		int temp;
		temp=stack2.top();	
    	stack2.pop();
    	return temp;

    }
    stack<int> stack1;
    stack<int> stack2;
};
int main()
{
	Solution s;
	int temp;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	temp=s.pop();
	cout<<temp<<endl;
	temp=s.pop();
	cout<<temp<<endl;
	return 0;
}

