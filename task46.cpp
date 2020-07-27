#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
struct student{
	char name[5];
	int num;
	int age;
	char sex; 
};
student stud[3]={
{"Li",25,18,'f'},
{"Fun",32,19,'m'},
{"Wang",40,17,'f'}
};
int main()
{
	ofstream outfile("stud.dat",ios::binary);
	if(!outfile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	for(int i=0;i<3;i++)
		outfile.write((char*)&stud[i],sizeof(stud[i]));
	cout<<"任务完成，请查看文件"<<endl;
	outfile.close();
	return 0;
}

