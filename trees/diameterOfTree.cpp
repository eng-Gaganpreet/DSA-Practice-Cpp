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

int diameterOfTree(node * root)
{
    
    if(root == nullptr)
        return 0;

    int lheight =max(lheight,(1+ diameterOfTree(root->left)));
    int rheight =max(rheight,(1+ diameterOfTree(root->right)));
 
    return max(lheight,rheight);
     
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