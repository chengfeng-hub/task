#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string sort_str(string str)
{
	string s1,s2,s3;
	int len=str.length();
	int i;
	int j=0;
	int k=0;
	int m=0;
	for(i=0;i<len;i++)
	{
		if(str[i]<='9'&&str[i]>='0')
			s1+=str[i];
		else if(str[i]<='Z'&&str[i]>='A')
			s2+=str[i];
		else if(str[i]<='z'&&str[i]>='a')
			s3+=str[i];
	}
//	sort(s1.begin(),s1.end());
	string s=s1+s2+s3;
	sort(s.begin(),s.end());
	return s;
}


int main()
{
	string str("1as2fsaSDCE5431");
//	cin>>str;
//	string temp=sort_str(str);
	sort(str.begin(),str.end());
//	cout<<str;
	cout<<str.substr(0,5);
	return 0;
}

