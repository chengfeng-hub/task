#include<iostream>
using namespace std;
class Solution {
public:
    /**
     * 返回两个区间内各取一个值相乘是p的倍数的个数
     * @param a int整型 第一个区间的左边界
     * @param b int整型 第一个区间的右边界
     * @param c int整型 第二个区间的左边界
     * @param d int整型 第二个区间的右边界
     * @param p int整型 质数
     * @return long长整型
     */
    long long numbers(int a, int b, int c, int d, int p) {
//    	int i,j;
//    	long long num=0;
//        for(i=a;i<=b;i++)
//        {
//        	if((i%p==0)||(p%i==0))
//        		num++:
//		}
//		for(j=c;j<=d;j++)
//		{
//			if((j%p==0)||(p%j==0))
//        		num++:
//		}
//        return num;
		 int cnt1 = (b / p) - (a -1) /p;
        int cnt2 = (d / p) - (c - 1) /p;
        long long ans = 1LL * cnt1 * (d-c + 1) + 1LL * cnt2 * (b - a + 1 - cnt1);
        return ans;
    }
};

int main()
{
	Solution s;
	long long temp;
	temp=s.numbers(3,7,4,6,3);
	cout<<temp; 
	return 0;
}

