#include<iostream>
using namespace std;
void print_array(int arr[])
{
   int n = sizeof(arr) / sizeof(arr[0]);
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
}
 
int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   print_array(arr);
   return 0;
}
