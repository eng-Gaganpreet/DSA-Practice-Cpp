#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTreeRecursive(node *root)
{
    int data;
    cout << "enter the data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "enter the data for inserting in left of : " << data << endl;
    root->left = buildTreeRecursive(root->left);
    cout << "enter the data for inserting in right : " << data << endl;
    root->right = buildTreeRecursive(root->right);
    return root;
}

node *buildTreeIterative(node *root)
{
    int data;
    cout << "enter the root node data : ";
    cin >> data;
    root = new node(data);
    queue<node *> q;
    q.push(root);
    while (not q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter the left child of " << temp->data << " : ";
        cin >> data;
        if (data != -1)
        {
            temp->left = new node(data);
            q.push(temp->left);
        }
        cout << "enter the right child of " << temp->data << " : ";
        cin >> data;
        if (data != -1)
        {
            temp->right = new node(data);
            q.push(temp->right);
        }
    }
    return root;
}



int main()
{
    // 1 2 4 -1 -15 -1 -1 3 6 -1 -1 -1
    node *root1 = buildTreeRecursive(root1);
    // node *root2 = buildTreeRecursive(root2);

    return 0;
}