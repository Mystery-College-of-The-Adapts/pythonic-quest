#include<iostream>
#include<queue>
using namespace std;

struct BinaryTreeNode
{
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

};


//void Inorder(BinaryTreeNode *root)
//{
//	if (root == NULL)
//		cout << "ERROR: Empty Binary Tree" << endl;
//	else
//	{
//		Inorder(root->left);
//		cout << root->data;
//		Inorder(root->right);
//	}
//}
//
//void Preorder(BinaryTreeNode *root)
//{
//	if (root == NULL)
//		cout << "ERROR: Empty Binary Tree" << endl;
//	else
//	{
//		cout << root->data;
//		Preorder(root->left);
//		Preorder(root->right);
//	}
//}
//
//void Postorder(BinaryTreeNode *root)
//{
//	if (root == NULL)
//		cout << "ERROR: Empty Binary Tree" << endl;
//
//	else
//	{
//		Postorder(root->left);
//		Postorder(root->right);
//		cout << root->data;
//	}
//}
//
//void levelOrder(BinaryTreeNode *root)
//{
//	
//	
//	
//	if(root == NULL)
//		cout << "ERROR: Empty Binary Tree" << endl;
//
//	else
//	{
//		queue<BinaryTreeNode*>Q;
//		Q.push(root);
//
//		//while there is at least one discovered node
//		while (!Q.empty())
//		{
//			BinaryTreeNode *current = Q.front();
//			cout << current->data << endl;
//
//			if (current->left != NULL)
//				Q.push(current->left);
//			
//			if (current->right != NULL)
//				Q.push(current->right);
//
//			Q.pop(); //removing element at front
//		}
//
//		
//	}
//
//
//
//}
//
//
//
//// Find  The maximum element in a Binary Tree
//
//int findMax(BinaryTreeNode *root)
//{
//	int root_val, left, right, max = INT_MIN;
//
//	if (root != NULL)
//	{
//		root_val = root->data;
//
//		left = findMax(root->left);
//		right = findMax(root->right);
//
//		// Find The largest of the three values
//
//		if (left > right)
//			max = left;
//		else
//			max = right;
//
//		if (root_val > max)
//			max = root_val;
//	}
//
//	return max;
//}

void Insert(BinaryTreeNode*&root, int x)
{
	

	BinaryTreeNode *temp;
	BinaryTreeNode * newNode;
	newNode = new BinaryTreeNode();

	newNode->left = NULL;
	newNode->right = NULL;

	if (!newNode)
	{
		cout << "Memory Error" << endl;
		return;
	}

	if (!root)
	{
		root = newNode;
		return;
	}
	
	queue<BinaryTreeNode*>Q;
	Q.push(root);

	while (!Q.empty())
	{
		temp = Q.front();
		Q.pop();

		if (temp->left)
			Q.push(temp->left);

		else
		{
			temp->left = newNode;
			return;
		}

		if (temp->right)
			Q.push(temp->right);

		else
		{
			temp->right = newNode;
			return;
		}

	}
}

int main()
{
	BinaryTreeNode *root = NULL;
	int x = 10;
	Insert(root, x);
	

	system("pause");
	return 0;
}