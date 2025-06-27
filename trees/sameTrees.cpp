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

bool sameTrees(node *root1, node *root2)
{

    if (root1 == nullptr and root2 == nullptr)
        return 1;
    if ((not root1 and root2) or (root1 and not root2))
        return 0;
    if (root1->data != root2->data)
        return 0;

    return sameTrees(root1->left, root2->left) and sameTrees(root1->right, root2->right);
}

int main()
{
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1
    node *root1 = buildTree(root1);
    node *root2 = buildTree(root2);

    bool result = sameTrees(root1, root2);
    if (result)
        cout << "The trees are indentical..." << endl;
    else
        cout << "The trees are not indentical.." << endl;

    return 0;
}