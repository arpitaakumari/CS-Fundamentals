#include<bits/stdc++.h>

using namespace std;
template <typename T>
class TreeNode 
{
    public:
        T data;
        vector<TreeNode<T>*> children;
    
    TreeNode(T data)
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

TreeNode<int>* takeInput()
{
    int rootData;
    cout<<"Enter data : "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter number of children : "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
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

int main()
{
    TreeNode<int>* root = takeInputlevelwise();
    print(root);
    return 0;
}