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

vector<int> postOrderInterative(node * root)
{
    stack<node*>st;
    st.push(root);
    vector<int>ans;

    while(not st.empty())
    {
        node *temp = st.top();
        st.pop();
        ans.push_back(temp->data);

        if(temp->left)  
            st.push(temp->left);
        
        if(temp->right)
            st.push(temp->right);
    }
    reverse(ans.begin() , ans.end());

    return ans;
}

int main()
{ 
    // 1 2 4 -1 -1 5 -1 -1  3 6 -1 -1 -1

        //         1
        //     2         3
        // 4      5   6

    node *root = buildTree(root);
    vector<int>ans;
    ans = postOrderInterative(root);

    for(int ele : ans)
    {
        cout<<ele<<"  ";
    }
    cout<<endl;

    return 0;
}