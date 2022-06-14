#include<iostream>
#include<vector>
using namespace std;

struct Node
{
	Node* left = NULL;
	Node* right = NULL;
	int data;

	Node(int data)
	{
		if (data)
		{
			this->data = data;
		}

	}

};
static int flag = 0;
void fillTree(struct Node* node)
{
	if (flag == 100)
	{
		return;
	}
	else
	{
		node->left = new Node(40);
		node->right = new Node(50);
		flag++;
		fillTree(node->left);
	}
}

void PostOrderTraversal(struct Node* node)
{
	if (node == NULL)
		return;

	PostOrderTraversal(node->left);
	cout << node->data << "-> ";

	PostOrderTraversal(node->right);
}


int main()
{
	struct Node* root = new Node(10);

	fillTree(root);
	// root->left=new Node(20);
	// root->right=new Node(40);
	// root->left->left=new Node(60);
	// root->left->right=new Node(80);

	PostOrderTraversal(root);
}