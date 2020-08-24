#include <iostream>  
using namespace std;  

int solve(int hist[], int n)  
// hist: contains the heights of the bars   
// n: the number of the bars in the histogram.  
{  
        int* arr = new int[n];// ����һ�����������  
        arr[0] = hist[0];  
        int max = hist[0]; // ������  
  
        for(int i=1; i<n; i++)  
        {  
                arr[i] = hist[i];  
                for(int j=i-1; j>=0; j--)  
                        if(arr[j]>arr[i]){  
                                if(arr[j]*(i-j)>max)  
                                        max = arr[j]*(i-j);  
                                arr[j] = arr[i];  
                        }  
                        else break;    
                //����arr���Ԫ�أ����ַǵݼ���˳��  
        }  
  
        //����ɨ��һ�ߣ��Ը���������  
        for(int i=0; i<n; i++)  
                if(arr[i]*(n-i)>max)  
                        max = arr[i]*(n-i);  
        return max;  
}  
  
int main(int argc, char** argv)  
{  
        int hist[] = {5,5,5,5,5};  
        int max = solve(hist, sizeof(hist)/sizeof(int));  
        cout<<max<<endl;  
}  
