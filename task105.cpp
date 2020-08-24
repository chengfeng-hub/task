#include <iostream>
using namespace std;
class D
{
        int d=1;
    public:
        D(int x=1):d(x) {}
        ~D()
        {
            cout<<"D";
        }
};
int main()
{
    D d;
    D* p=new D[2];
    delete[]p;
    return 0;
}

