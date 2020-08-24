#include <iostream>
using namespace std;
class Test
{
public:
    Test() { cout << "i like zk"; }
    Test(int) { cout << "i like wangyi"; }
    void exe() { cout << "this is my choice"; }
};
int main()
{
    Test a(1);//1
    a.exe();  //2
    Test b; //3
    b.exe();  //4
    Test c;   //5
    c.exe();  //6
        return 0;
}
