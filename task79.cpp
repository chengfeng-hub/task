#include<stdlib.h>
#include<stdio.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}Node;
typedef struct{
	Node* root;
}Tree;
void preorder(Node *node){
	if(node!=NULL)
	{
		printf("%d",node->data);
		preorder(node->left);
		preorder(node->right);
	}
}
void inorder(Node *node){
	if(node!=NULL)
	{
		inorder(node->left);
		printf("%d",node->data);
		inorder(node->right);
	}
}
void postorder(Node *node){
	if(node!=NULL)
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d",node->data);
		
	}
}
int get_height(Node* node)
{
	if(node==NULL)
		return 0;
	else
	{
		int left_h=get_height(node->left);
		int right_h=get_height(node->right);
		int max=left_h;
		if(right_h>max)
		{
			max=right_h;
		}
		return max+1;
	}
}
int get_maximum(Node *node)
{
	if(node==NULL)
		return -1;
	else
	{
		int m1=get_maximum(node->left);
		int m2=get_maximum(node->right);
		int m3=node->data;
		int max=m1;
		if(m2>max){max=m2;}
		if(m3>max){max=m3;}
		return max;
	}
		
}
void insert(Tree* tree,int value)
{
	 Node *node=(Node *)malloc(sizeof(Node));
	 node->data=value;
	 node->left=NULL;
	 node->right=NULL;
	 if(tree->root==NULL)
	 {
	 	tree->root=node; 
	 }
	 else
	 {
	 	Node* temp=tree->root;
		while(temp!=NULL)
		{
			if(value<temp->data)
			{
				if(temp->left==NULL)
				{
					temp->left=node;
					return;
				}
				else
				{
					temp=temp->left;	
				}
			}
			else
			{
				if(temp->right==NULL)
				{
					temp->right=node;
					return;
				}
				else
				{
					temp=temp->right;	
				}
			}
		 } 
	 } 
}

int main()
{
	int arr[7]={2,8,9,3,4,6,7};
	Tree tree;
	tree.root=NULL;
	int i;
	for(i=0;i<7;i++)
	{
		insert(&tree,arr[i]);
	}
	preorder(tree.root);
	printf("\n");
	inorder(tree.root);
	printf("\n");
	int length=get_height(tree.root);
	printf("%d",length);
	printf("\n");
	int max=get_maximum(tree.root);
	printf("%d",max);
}
