#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "enter the data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "enter the left child of : " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the right child of : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void preorder_recursive(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder_recursive(root->left);
    preorder_recursive(root->right);
}

int main()
{
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1

    node *root = buildTree(root);

    preorder_recursive(root);
    return 0;
}