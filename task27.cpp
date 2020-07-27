#include <iostream>
#include <string>
using namespace std;
void cout_value(int value);
int num[63]={0}; 
int main()
{
	int i=0,j,k,m,n=1;
	int max=0;
	string str;
	getline(cin, str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
			num[0]++;
		else if(str[i]<58&&str[i]>47)
		{
			j=48;
			while(j<58)
			{				
				if(str[i]==j)
				{
					num[j-47]++;
				}	
				j++;
			} 		
		}
		else if(str[i]<91&&str[i]>64)
		{
			k=65;
				while(k<91)
			{
				
				if(str[i]==k)
				{
					num[k-54]++;
				}	
				k++;
			} 
		}
		
		else if(str[i]<123&&str[i]>96)
		{
			m=97;
			while(m<123)
			{
				
				if(str[i]==m)
				{
					num[m-59]++;
				}	
				m++;
			} 
		}
		
		else
			continue;
		i++;
	}
//		cout<<"i=¿Õ¸ñ"<<"  value="<<num[0]<<endl;
//	for(int i=1;i<11;i++)
//		cout<<"i="<<i-1<<"  value="<<num[i]<<endl;
//	for(int i=11;i<37;i++)
//		cout<<"i="<<(char)('A'+i-11)<<"  value="<<num[i]<<endl;
//	for(int i=37;i<63;i++)
//		cout<<"i="<<(char)('a'+i-37)<<"  value="<<num[i]<<endl;
	while(1)
	{	
		n=0;
		for(int i=0;i<63;i++)
		{
			if(num[i]>max)
			{
				max=num[i];
				n++;
			}
			
		}
			if(n==0)
			break;
//		cout<<max;
	
//		cout_value(max);
	for(int i=0;i<64;i++)
	{
		if(max==num[i])
		{
		
			if(i==0)
				cout<<" ";
			else if(i<11&&i>0)
				cout<<i-1;
			else if(i<37&&i>10)
				cout<<(char)('A'+i-11);
//			else if(i<63&&i>36)
			else 
				cout<<(char)('a'+i-38); 
			num[i]=0;
		}
	}
		max=0;
		
	}

//	for(int i=0;i<63;i++)
//	{
//		if(max==num[i])
//		{
//			if(i<10&&i>0)
//				cout<<i;
//			else if(i=0)
//				cout<<' ';
//			else if(i<37&&i>10)
//				cout<<(char)('A'+i-11);
//			else if(i<63&&i>36)
//				cout<<(char)('a'+i-37);
//		}
//	}
//	
	
	return 0;
 } 
 void cout_value(int value)
{
	for(int i=0;i<63;i++)
	{
		if(value==num[i])
		{
			if(i<10&&i>0)
				cout<<i;
			else if(i=0)
				cout<<' ';
			else if(i<37&&i>10)
				cout<<(char)('A'+i-11);
			else if(i<63&&i>36)
				cout<<(char)('a'+i-37);
			num[i]=0;
		}
	}
}
