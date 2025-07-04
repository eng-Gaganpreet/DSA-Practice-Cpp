#include<bits/stdc++.h>
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

int height(node * root,int &diameter)
{
    if(root == nullptr)
        return 0;
    
    int lh = height(root->left, diameter);
    int rh = height(root->right,diameter);
    diameter = max(diameter,lh+rh);

    return 1+max(lh,rh);
}

int diameterOfTree(node * root)
{
    int diameter = 0;
    height(root,diameter);

    return diameter;
}

int main()
{
            //      1
            //     / \
            //    2   3
            //   /\    /
            //  4  5   6 

    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1
    node *root = buildTree(root);

    int d = diameterOfTree(root);
    cout<<"The diameter of the tree : "<<d;
    
    return 0;
}