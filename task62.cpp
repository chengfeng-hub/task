#include<iostream>
using namespace std;
int max(int arr[],int n)
{
	if(n==0)
		return arr[0];
	if(max(arr,n-1)>arr[n])
		return max(arr,n-1);
	else 
		return arr[n];
 } 
int main()
{
	int arr[]={5,6,1,2,3,4,5,6,7};
	int num = max(arr,7);
	printf("%d\n",num);
	return 0;
}

