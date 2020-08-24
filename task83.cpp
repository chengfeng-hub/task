#include<iostream>
using namespace std;
class Solution {
public:
    /**
     * 
     * @param n long长整型 
     * @return int整型
     */
    int Numberofoperations(long long n) {
    	int count=0;
    	while(1)
    	{
    		if(n%2)
    		{
    			n=n-3;
    			count++;
			}
       		else
       		{
       			n=n/2;
       			count++;
			}		
        	if(n==0)
        		return count; 
        	if(n==-1)
        		return -1;
    	}
		}
      
};
int main()
{
	Solution s;
	int num=s.Numberofoperations(9);
	cout<<num<<endl;
	return 0;
}

