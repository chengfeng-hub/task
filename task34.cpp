#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int num;
    struct ListNode *Next;
};
ListNode* CreatelistNode(int value);
void ConnectListNodes(ListNode* pCurrent,ListNode* pNext);
void PrintListNode(ListNode* pNode);
void PrintList(ListNode* pHead);
void DestroyList(ListNode* pHead);
void AddTOTail(ListNode** pHead,int value);
void RemoveNode(ListNode** pHead,int value);
unsigned int GetlistLength(ListNode* pHead);
int main()
{   
	ListNode *p1,*p2;
	p1=CreatelistNode(10);
//	p2=CreatelistNode(20);
//	ConnectListNodes(p1,p2);
	PrintList(p1);
//	DestroyList(p1);
	AddTOTail(&p1,20);
	PrintList(p1);
	AddTOTail(&p1,30);
	PrintList(p1);
//	RemoveNode(&p1,20);
//	PrintList(p1);
	unsigned int length=GetlistLength(p1);
	printf("The List length is %d",length);
//	PrintListNode(p2);
    return 0;
}
ListNode* CreatelistNode(int value)
{
    ListNode* pNode = new ListNode();
    pNode->num=value;
    pNode->Next=NULL;
    return pNode;
}
void ConnectListNodes(ListNode* pCurrent,ListNode* pNext)
{
    if(pCurrent==NULL)
        printf("Error to connect two node.\n");
    pCurrent->Next=pNext;
}
void PrintListNode(ListNode* pNode)
{
    if(pNode==NULL)
        printf("The node is NULL.\n");
    else
        printf("The key in node is %d.\n",pNode->num);
}
void PrintList(ListNode* pHead)
{
    printf("start.\n");
    ListNode* pNode=pHead;
    while(pNode!=NULL) {
        printf("%d.\t",pNode->num);
        pNode=pNode->Next;
    }
    printf("end.\n");
}
void DestroyList(ListNode* pHead)
{
	ListNode* pNode=pHead;
	while(pNode!=NULL)
	{
		pHead=pHead->Next;
		delete pNode;
		pNode=pHead;
	}
}
void AddTOTail(ListNode** pHead,int value)
{
	ListNode* pNew=new ListNode();
	pNew->num=value;
	pNew->Next=NULL; 
	if(*pHead==NULL)
	{
		*pHead=pNew;
	}
	else
	{
		ListNode* pNode=*pHead;
		while(pNode->Next!=NULL)
		{
			pNode=pNode->Next;
		}
		pNode->Next=pNew;
	}
}
void RemoveNode(ListNode** pHead,int value)
{
	if(pHead==NULL||*pHead==NULL)
	{
		return;
	}
	ListNode* pToBeDeleted=NULL; 
	if((*pHead)->num==value)
	{
		pToBeDeleted=*pHead;
		*pHead=(*pHead)->Next;
	 } 
	else
	 {
	 	ListNode* pNode=*pHead;
	 	while(pNode->Next!=NULL&&pNode->Next->num!=value)
	 	{
	 		pNode=pNode->Next;
		 }
		 if(pNode->Next!=NULL&&pNode->Next->num==value)
		 {
		 	pToBeDeleted=pNode->Next;
		 	pNode->Next=pNode->Next->Next;
		 }
	 }
	 if(pToBeDeleted!=NULL)
	 {
	 	delete pToBeDeleted;
	 	pToBeDeleted=NULL;
	 }
}
unsigned int GetlistLength(ListNode* pHead)
{
	unsigned int length=0;
	ListNode* pNode=pHead;
	while(pNode!=NULL)
	{
		++length;
		pNode=pNode->Next;
	}
	return length;
 } 
