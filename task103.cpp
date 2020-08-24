#include<iostream>
#include<vector>
using namespace std;
class Solution{
	  public:
	    vector<int> multiply(const vector<int>& A) {
    		vector<int> B;
    		int i,j;
    		int sum;
    		if(A.size()==1)
    			return B;
    		else
    		{
    			for(j=0;j<A.size();j++)
    			{
    				sum=1;
    				for(i=0;i<j;i++)
		    		{
		    			sum*=A[i];
					}
					for(i=j+1;i<A.size();i++)
		    		{
		    			sum*=A[i];
					}
					B.push_back(sum);
				}
    		
				
			}
    		return B;
    }
};
int main()
{	
	int num[3]={1,2,3};
	Solution s;
	vector<int> A(num,num+3);
	vector<int> B;
	B=s.multiply(A);
	for(int i=0;i<B.size();i++)
	{
		cout<<B[i]<<endl;
	}
	return 0;
}

