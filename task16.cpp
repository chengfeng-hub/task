#include<iostream>
 
using namespace std;
 
class _iterator
{
    private:
            char *p;
    public:
            _iterator(char*str):p(str){}
            char*&operator++()
            {    
                p+=1;//��p++ͬ��;
                return p;
            }
};
 
int main()
{
    char *p="This is C++ program";
    _iterator it(p);
    cout<<"++֮ǰ��"<<p<<endl;
    char*p1=++it;//�ѵ�ַ��ǰ����һ��char�ͳ���,Ȼ���ָ��p1
    cout<<"++֮��"<<p1<<endl;
    return 0;
}
