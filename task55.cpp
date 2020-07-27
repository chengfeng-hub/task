#include<iostream>
#include<string.h> 
#include<string> 
using namespace std;
string MarkNum(string pInStr)
{
	int len;
	int i=0;
	len=pInStr.size();
	int num[len]={0};
	basic_string <char>::iterator str_Iter;
	while(i<len)
	{
		if(pInStr[i]<='9'&&pInStr[i]>='0')
		{
			num[i]++;
			cout<<num[i]<<endl;
//			if(pInStr[i+1]>'9'||pInStr[i+1]<'0')
//			{
//				str_Iter = ( pInStr.begin( )+ i++); 
//				pInStr.insert ( str_Iter , '*' );
//			}
//			else
//			{
//				while(pInStr[i++]<='9'&&pInStr[i++]>='0');
//				str_Iter = ( pInStr.begin( )+ i-1); 
//				pInStr.insert ( str_Iter , '*' );
//			}
		}
		i++;
	}
	

	return pInStr;
}
int main()
{
	string str,Object_str;
	cin>>str;
	Object_str=MarkNum(str);
	cout<<Object_str;
	return 0;
}

