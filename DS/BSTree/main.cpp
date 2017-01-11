#include<iostream>
#include<queue>

using namespace std;

struct BST
{
	int data;
	BST *left;
	BST *right;

};

BST *Insert(BST *root, int x)
{
	if (root == NULL)
	{
		root = new BST();

		if (root == NULL)
		{
			cout << "Memory Error" << endl;
			return NULL;
		}

		else
		{
			root->data = x;
			root->left = root->right = NULL;
		}
	}

	else
	{
		if (x < root->data)
			root->left = Insert(root->left, x);
		else if (x > root->data)
			root->right = Insert(root->right, x);
	}

	
	return root;
}




int main()
{
	BST *root = NULL;

	int x = 10;
	Insert(root, x);
	system("pause");
	return 0;
}