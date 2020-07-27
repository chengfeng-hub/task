#include <iostream>
using namespace std;
class Student{
	public: 
		Student(int,string,float);
		void display();
	protected:
		int num;
		string name;
		float score; 
};
class Graduate:public Student
{
	public:
		Graduate(int,string,float,float);
		void display();
	private:
		float pay;
};
Graduate::Graduate(int i,string s,float f,float p):Student(i,s,f),pay(p)
{
}

Student::Student(int n,string s,float f):num(n),name(s),score(f)
{
//	num=n;
//	name=s;
//	score=f;
}
void Student::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\n\n";
}
void Graduate::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\npay:"<<pay<<"\n\n";
}
int main()
{
	Student stu1(1002,"Li",87.5);
	stu1.display();
	Graduate grad1(2001,"wang",98.5,563.5);
	grad1.display();
	return 0;
 } 
