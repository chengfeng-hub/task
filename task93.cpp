#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	void replaceSpace(char *str,int length) {
		int i=0;
		string s;
		s=str;
		string flag("%20");
		while(s[i]!='\0')
		{
			if(s[i]==' ')
				s=s.substr(0,i)+flag+s.substr(i+1);
			i++;
		}
		i=0;
		while(s[i]!='\0')
		{
			str[i]=s[i];
			i++;
		}
		str[i]='\0';
	}
};
int main()
{
	Solution s;
	char str[13]={"We Are Happy"};
	s.replaceSpace(str,13);
	cout<<str; 
	return 0;
}

