#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int i,j;
		for(i=0;i<array.size();i++)
		{
			for(j=0;j<array[0].size();j++)
			{
				if(array[i][j]==target)
				{
					return true;
				}
					
			}
		}
		return false;
    }
};
int main()
{
	int num[2][3]={{1,2,3},{4,5,6}};
	vector<vector<int> > array(3);
	for(int i = 0; i <2; i++)
		array[i].resize(3);
	for(int i = 0; i < 2;++i)
	{
    	for (int j = 0; j < 3; ++j)
		{
        	array[i][j]=num[i][j];
    	}
	}
	Solution s;
	bool flag=s.Find(8,array);
	cout<<flag;
	return 0;
}

