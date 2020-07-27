#include <iostream>
using namespace std;
 
// ��һ�������ռ�
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// �ڶ��������ռ�
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}
int main ()
{
 
   // ���õ�һ�������ռ��еĺ���
   first_space::func();
   
   // ���õڶ��������ռ��еĺ���
   second_space::func(); 
    
   cout<<"hello,world"<<endl;
   getchar();
   return 0;
}
