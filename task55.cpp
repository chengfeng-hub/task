#include<iostream>
#include<string.h> 
#include<string> 
using namespace std;
string MarkNum(string pInStr)
{
	int i=0;
	// basic_string <char>::iterator str_Iter;
	
		while(i<pInStr.length())
		{


				if(pInStr[i]>='0'&&pInStr[i]<='9'&&(i==0||pInStr[i-1]<'0'||pInStr[i-1]>'9')){
				pInStr=pInStr.substr(0,i)+"*"+pInStr.substr(i);
				i++;
				}
				if(pInStr[i]>='0'&&pInStr[i]<='9'&&(i+1==pInStr.length()||pInStr[i+1]<'0'||pInStr[i+1]>'9')){
				pInStr=pInStr.substr(0,i+1)+"*"+pInStr.substr(i+1);
				i++;
				}
			// if(pInStr[i]<='9'&&pInStr[i]>='0')
			// {
			// 	num[i]++;
			// 	cout<<num[i]<<endl;
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
			// }
				i++;
		}
	

	return pInStr;
}
int main()
{
	string str,Object_str;
	// cin>>str;
	while(cin>>str)
	{
		Object_str=MarkNum(str);
		cout<<Object_str;
		system("pause");
	}
	
	
	return 0;
}

