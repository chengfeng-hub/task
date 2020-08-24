#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    /**
     * 
     * @param arr int整型vector 
     * @return int整型
     */
    void sort(vector<int>& arr,int left,int right)
    {	
		if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    	{
       	 return ;
   		}
    	int key=arr[left];
    	int i=left;
    	int j=right;
    
    	while(i<j)
    	{
    		while(i<j&&arr[j]<=key)
    			j--;
			arr[i]=arr[j];
			while(i<j&&arr[i]>=key)
    			i++;
			arr[j]=arr[i];
		}
	
		arr[i]=key;
		sort(arr,left,i-1);
		sort(arr,i+1,right);
	}
    int Answerofjudge(vector<int>& arr) {
    	int len= arr.size();
    	int i,j;
    	double sum=0;
    	double avg;
    	double mid;
    	for(i=0;i<len;i++)
			sum+=arr[i];
		avg=sum/len;
//		for(i=0;i<len-1;i++)
//		{
//			for(j=0;j<len-i-1;j++)
//			{
//				if(arr[j]>arr[j+1])
//				{
//					int temp=arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=temp;
//				}
//			}
//		}
		sort(arr,0,len-1);
		if(len%2==0)
			mid=(arr[len/2-1]+arr[len/2])*0.5;
		else
			mid=arr[len/2];
		cout<<mid<<endl;
		cout<<avg<<endl;
		if(mid>avg)
			return 1;
		else if(avg>mid)
			return -1;
		else 
			return 0;
    }
 
};
int main()
{
	Solution s;
	int num[6]={6,6,6,6,5,8};
	vector<int> array(num,num+6);
	int temp=s.Answerofjudge(array);
	cout<<temp;
	return 0;
}

