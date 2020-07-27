
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,count1=0,count2=0;
    double sum=0.0;
    while(cin>>x)
    {
        if(x<0)
            ++count1;
        else
        {
            ++count2;
            sum+=x;
        }
    }
    cout<<count1<<'\n'<<showpoint<<sum/count2<<endl;
    return 0;
}
