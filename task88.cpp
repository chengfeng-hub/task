#include<iostream>
using namespace std;
class Solution {
public:
    /**
     * �������������ڸ�ȡһ��ֵ�����p�ı����ĸ���
     * @param a int���� ��һ���������߽�
     * @param b int���� ��һ��������ұ߽�
     * @param c int���� �ڶ����������߽�
     * @param d int���� �ڶ���������ұ߽�
     * @param p int���� ����
     * @return long������
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

