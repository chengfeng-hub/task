#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
 };

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
    	vector<int> num;
    	ListNode* pNode=head;
    	if(pNode==NULL)
    		return num;
      	while(pNode!=NULL)
      	{
			num.push_back(pNode->val);
      		pNode=pNode->next;
		}
		vector<int> arrayRever;
  		arrayRever.reserve(num.size());
		vector<int>::reverse_iterator riter;
	    for (riter=num.rbegin();riter!=num.rend();riter++)
	    {
	        arrayRever.push_back(*riter);
	    }
		return arrayRever;
    }
};
int main()
{
	struct ListNode data(6);
	Solution s;
	vector<int> temp;
	temp=s.printListFromTailToHead(&data);
	cout<<temp[0];
	return 0;
}

