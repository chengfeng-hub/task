#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    /**
     * 
     * @param n int整型 
     * @param m int整型 
     * @param a int整型vector 
     * @return int整型
     */
    int solve(int n, int m, vector<int>& a) {
        int count=0;
        int temp=0;
        int flag;
        for(int i=0;i<n;i++)
        {
        	if(a[i]==1)
        	{
        		count++; 
        		if(count>temp)
        		{
        			temp=count;
        			flag=i-temp;		
				}		
			}
        	else 
        		count=0;
		}
		if((temp+m)>=n)
			return n;
		else
			return temp+m;
    }
};
int main()
{
	Solution s;
	int a[6]={1,0,0,1,1,1};
	vector<int> array(a,a+6);
//	cout << "vector size = " << array.size() << endl;
//	for(int i = 0; i < 6; i++)
//	{
//      cout << "value of vec [" << i << "] = " << array[i] << endl;
//    }
	int temp = s.solve(6,1,a);
	cout<<temp;
	return 0;
}

