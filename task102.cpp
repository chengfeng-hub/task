#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        char num[256]={0};
        int i;
        if(str.size()==0)
        	return -1;
        for(i=0;i<str.size();i++)
        {
        	num[str[i]]++;
		}
		for(i=0;i<str.size();i++)
        {
        	if(num[str[i]]==1)
        	{
        		return i;
			}
				
		}
		return -1;	

    }
};
int main()
{
	Solution s;
	string str("abadb");
	int temp=s.FirstNotRepeatingChar(str);
	cout<<temp;
	return 0;
}

