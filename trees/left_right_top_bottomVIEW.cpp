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

vector<int> leftView(node *root, int level, vector<int> &ans)
{

    // WITHOUT RECURSION.....

    // if(not root)
    //     return;
    // queue<node*>q;
    // vector<int>ans;
    // q.push(root);

    // while(not q.empty())
    // {
    //     int n = q.size();
    //     ans.push_back(q.front()->data);
    //     while(n--)
    //     {
    //         node * temp = q.front();
    //         q.pop();
    //         if(temp->left)
    //             q.push(temp ->left);
    //         if(temp->right)
    //             q.push(temp->right);
    //     }
    // }
    // return ans;

    // WITH RECURSION...

    if (not root)
        return ans;

    if (level == ans.size())
        ans.push_back(root->data);

    leftView(root->left, level + 1, ans);
    leftView(root->right, level + 1, ans);
}

vector<int> rightView(node *root, int level, vector<int> &ans)
{

    // WITHOUT RECURSION.....

    // if (not root)
    //     return;
    // queue<node *> q;
    // q.push(root);

    // while (not q.empty())
    // {
    //     int n = q.size();
    //     ans.push_back(q.front()->data);
    //     while (n--)
    //     {
    //         node *temp = q.front();
    //         q.pop();

    //         if (temp->right)
    //             q.push(temp->right);
    //         if (temp->left)
    //             q.push(temp->left);
    //     }
    // }
    // return ans;

     // WITH RECURSION...

    if (not root)
        return ans;

    if (level == ans.size())
        ans.push_back(root->data);

    leftView(root->right, level + 1, ans);
    leftView(root->left, level + 1, ans);
}

void find(node * root, int pos,int l,int r)
{
    if(not root)
        return;
    
    l=min(l,pos);
    r=max(l,pos);

    find(root->left,pos-1,l,r);
    find(root->right,pos+1,l,r);
}

vector<int> topView(node * root)
{
    int l=0 , r=0;
    find(root,0,l,r);

    vector<int>ans(r-l+1);
    vector<int>filled(r-l+1,0);

    queue<node*>q;
    queue<int>index;

    q.push(root);
    index.push(-1*l);
    while(not q.empty())
    {
        node * temp = q.front();
        q.pop();

        int pos = index.front();
        index.pop();

        if(not filled[pos])
        {
            filled[pos] = true;
            ans[pos] = temp->data;
        }
        if(temp->left)
        {
            q.push(temp->left);
            index.push(pos-1);
        }
        if(temp->right)
        {
            q.push(temp->right);
            index.push(pos+1);
        }
    }
    return ans;
}

int main()
{
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1
    //          1
    //      2       3
    //   4    5   6
    node *root = buildTree(root);

    vector<int>ans;

    vector<int> right = topView(root);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}