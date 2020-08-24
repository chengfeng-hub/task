#include <iostream>
using namespace std;
 
int main()
{
int N;
int &rN= N;
N=1;
cout<<"rN的值为:"<<rN<<endl;
cout<<"&rN的值为："<<rN<<endl;
 
 return 0;
}
