#include<iostream>
using namespace std;
int findContentChildren(int* g, int gSize, int* s, int sSize)
{	

	int i,j;
	int temp;
	for(i=0;i<gSize-1;i++)
	{
		for(j=0;j<gSize-i-1;j++)
		{
			if(g[j]>g[j+1])
			{
				temp=g[j];
				g[j]=g[j+1];
				g[j+1]=temp;
			}
		}
	}
	for(i=0;i<sSize-1;i++)
	{
		for(j=0;j<sSize-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}

//		j=0;
//		i=0;
//		while(i<gSize)
//		{
//			if(s[j]>=g[i])
//			{
//				num++;
//				j++;
//		    } 
//
//			i++;
//		} 
//		return num;
	int sum=0;
    int flag=0; //flag标记分配到第几块饼干
    for(int i=0;i<gSize;i++)
    {
        for(int j=flag;j<sSize;j++)
        {
            if(g[i]<=s[j])
            {
                sum++;
                flag=j+1;
                break;
            }
        }
        if(flag>sSize)
            break;
    }
    return sum;


}
int main()
{
	int child[80];
	int value[80];
	int i=2,j=3;
	int num=0;
	while(1)
	{
		cin>>child[i++];
		char c=getchar();
		if(c=='\n')   //当键盘输入回车时结束输入输入
		{
            break;
        }
	}
	while(1)
	{
		cin>>value[j++];
		char c=getchar();
		if(c=='\n')   //当键盘输入回车时结束输入输入
		{
            break;
        }
	}
	i-=1;
	j-=1;
	num = findContentChildren(child,i,value,j);
	cout<<num;
	return 0;
}

