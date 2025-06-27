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

void inorder_recursive(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder_recursive(root->left);
    cout << root->data << " ";
    inorder_recursive(root->right);
}

int height(node *root, bool &valid)
{
    if (root == nullptr)
        return 0;

    int left = height(root->left, valid);

    if (valid)
    {
        int right = height(root->right, valid);

        if (abs(left - right) > 1)
            valid = 0;

        return 1 + max(left, right);
    }
}

bool isBalance(node *root)
{
    bool valid = true;

    height(root, valid);

    return valid;
}

int main()
{
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1
    node *root = buildTree(root);
    inorder_recursive(root);

    if (isBalance(root))
        cout << "The tree is balance tree....";
    else
        cout << "The tree is not balance tree...";

    return 0;
}