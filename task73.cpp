#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:

    int solve(int n, vector<string> & str) {
    	 	int count=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					
				}
			}
    }
};
int main()
{
	Solution s;
	string str[5]={"I","I","am","a","boy"};
	vector<string> array(str,str+5);
	cout << "vector size = " << array.size() << endl;
	for(int i = 0; i < 5; i++)
	{
      cout << "value of vec [" << i << "] = " << array[i] << endl;
    }
	int temp = s.solve(6,array);
	cout<<temp;
	return 0;
}

