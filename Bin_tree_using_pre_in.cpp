
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
    data=val;
    left=NULL;
    right=NULL;
    }
};
int search(int inorder[],int st,int e,int curr)
{
    for(int i=st;i<=e;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* buildtree(int preorder[],int inorder[],int st,int e)
{
    static int idx = 0;
    if(st>e){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(st==e){
        return node;
    }
    int pos = search(inorder,st,e,curr);
    node->left=buildtree(preorder,inorder,st,pos-1);
    node->right=buildtree(preorder,inorder,pos+1,e);
    return node;
}

void inorderprint(struct Node* root)
{
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
    return 0;
}
