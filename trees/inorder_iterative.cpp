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

void inorder_iterative(node *root)
{
    stack<node *> s;
    node *current = root;

    while (current != nullptr || !s.empty())
    {
        // Reach the leftmost node
        while (current != nullptr)
        {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout << current->data << " "; // Visit node

        current = current->right; // Visit right subtree
    }
}

int main()
{
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1

    node *root = buildTree(root);

    inorder_iterative(root);
    return 0;
}