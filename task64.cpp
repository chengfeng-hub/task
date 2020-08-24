#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	int i; 
	cin>>num;
	vector<int> vec;
	int temp;
	cout << "vector size = " << vec.size() << endl;
	for(i = 0; i < num; i++)
	{
		cin>>temp;
		vec.push_back(temp);
    }
 	cout << "vector size = " << vec.size() << endl;
 	for(i = 0; i < num; i++)
	{
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    vector<int>::iterator v = vec.begin();
    while(v != vec.end())
    {
    	cout<<*v<<endl;
    	v++;
	}
	return 0;
}

