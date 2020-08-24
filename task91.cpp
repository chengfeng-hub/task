#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
    	int i;
    	vector<int> res;
    	int maximum;
    	int m=0;
    	int n=size-1;
        if(num.size()<size)
        	return res;
        else 
        {
        	while(n<num.size())
        	{
        		maximum=0;
        		for(i=m;i<=n;i++)
		       	{
		        	if(maximum<num[i])
		        		maximum=num[i];
				}
				res.push_back(maximum);
				m++;
				n++;
			}
        
		}
		return res;
        	
    }
};
int main()
{
	Solution s;
	int i;
	int n[8]={2,3,4,2,6,2,5,1};
	vector<int> num(n,n+8);
	vector<int> res;
	res=s.maxInWindows(num,3);
	for(i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	
	return 0;
}

