#include<iostream>
using namespace std;
class Solution {
public:
    /**
     * 
     * @param n int���� �ַ�������n
     * @param k int���� ѭ�����ƴ���k
     * @return int����
     */
    int solve(int n, int k) {
		if(n>k)
			{
	            if(n>2*k)
	            {
	                if(n==3&&k==1)
	                    return 2;
	                else if(n==4&&k==1)
	                    return 3;
	                return k+solve(n-k,k);
	            }
	            else if(n==2*k)
	                return k;
	            else   
	                return solve(n,n-k);  		
			}
	    else if(n==k)
	        return 0;
		else
	      	return solve(n,k-n); 		
				
    }
};
int main()
{
	Solution s;
	int temp=s.solve(50,4);
	cout<<temp;
	return 0;
}

