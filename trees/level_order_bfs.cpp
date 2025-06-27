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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    node *temp;
    while (not q.empty())
    {
        temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
} 

int main()
{
    //1 2 4 7 -1 -1 8 -1 -1 5 -1 -1 3 6 -1 -1 -1  
    node * root = buildTreeRecursive(root);
    levelOrderTraversal(root);
    return 0;
}