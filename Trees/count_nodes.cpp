#include<bits/stdc++.h>

using namespace std;

template <typename T>

class TreeNode
{
    public:
    int data;
    vector<TreeNode<T>*> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode<int>* takeInputlevelwise()
{
    int rootdata;
    cout<<"Enter root data : ";
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the number of children of "<<front->data<<endl;
        int numchild;
        cin>>numchild;
        for(int i=0; i<numchild; i++)
        {
            int childdata;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childdata;
            TreeNode<int>* child = new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void print(TreeNode<int>* root)
{
    if(root == NULL)
        return;

    cout<<root->data<<": ";
    for(int i = 0; i < root->children.size(); i++)
        cout<<root->children[i]->data<<", ";

    cout<<endl;
    for(int i = 0; i < root->children.size(); i++)
        print(root->children[i]);
}

int numNodes(TreeNode<int>* root)
{
    int count = 1;
    for(int i=0; i<root->children.size(); i++)
    {
        count += numNodes(root->children[i]);
    }
    return count;
}

int main()
{
    TreeNode<int>* root = takeInputlevelwise();
    print(root);
    cout<<"The number of nodes is : "<<numNodes(root);
    return 0;
}