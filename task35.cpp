#include<iostream>
using namespace std;
class A
{
    public:
        int num;
//        A(int n){num=n;}
		
        
};
class B
{
    protected:
        int age;
};
class C:A,B
{
    private:
        char sex;
};
int main()
{  
	A a;
	a.num=10;
	printf("%d",a.num);
//	C s('m');
    return 0;
}
//class Demo { 
//public:
//    Demo():count(0) {}
//      ~Demo() {}
//
//      void say(const std::string&msg) {
//          fprintf(stderr,"%s\n", msg.c_str());
//      }
//   private:
//      int count;
//};
//
//int main(int argc, char **argv) {
//    Demo* v = NULL;
//    v->say("hello world");
//}

