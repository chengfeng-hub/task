#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
class Solution{
public:
	
    #define N 100005
    #define Set(a,b) memset(a,b,sizeof(a))
  vector<int> ans;
  int ls[N],rs[N],pos[N];
  bool vis[N];
  void dfs(int u){
    if(ls[u]) dfs(ls[u]);
    ans.push_back(u);
    if(rs[u]) dfs(rs[u]);
    return;
  }
  vector<int> solve(int n,vector<int> &pre,vector<int> &suf){
      Set(vis,0),Set(ls,0),Set(rs,0);
    reverse(suf.begin(),suf.end());
    for(int i=0;i<n;++i) pos[suf[i]]=i;
    int rt=pre[0];
    for(int i=0;i<n-1;++i) {
      int u=pre[i];int v=pre[i+1];
      vis[u]=1;if(pos[u]==n-1||vis[suf[pos[u]+1]]) continue;
      int v2=suf[pos[u]+1];
      if(v2==v) ls[u]=v;
      else ls[u]=v,rs[u]=v2;
    }
    dfs(rt);return ans;
  }
};
int main()
{
	Solution s;
	int num1[5]={3,2,1,5,4};
	int num2[5]={1,5,4,2,3};
	vector<int> array1(num1,num1+5);
	vector<int> array2(num2,num2+5);
	vector<int> array3;
	array3=s.solve(5,array1,array2);
	for(int i=0;i<5;i++)
	{
		cout<<array3[i]<<endl;
	}
	return 0;
}

