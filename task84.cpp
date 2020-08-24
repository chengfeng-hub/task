#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    /**
     * 
     * @param str string×Ö·û´® ³õÊ¼×Ö·û´®
     * @return string×Ö·û´®
     */
    string solve(string str) {
    	stack<char> s;
    	for(int i=0;i<str.length();i++)
    	{
    		if(s.empty()) s.push(str[i]);
    		else
			{
    			if(s.top()==str[i])
    			{
    				if(str[i]=='0')
    				{
    					s.pop();
    					if(!s.empty()&&s.top()=='1')  s.pop();
    					else s.push('1');
					}
					else
						s.pop();
				}
				else
					s.push(str[i]);
				
			}
		}
    	string s1="";
    	while(!s.empty())
    	{
    		s1+=s.top();
    		s.pop();
		}
    	reverse(s1.begin(),s1.end());
		return s1;
   	
	}
};
int main()
{
	Solution s;
	string str=s.solve("00110001");
	cout<<str;
	return 0;
}

