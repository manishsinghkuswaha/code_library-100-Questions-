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
Node* buildtree(int postorder[],int inorder[],int st,int e)
{
    static int idx = 4;
    if(st>e){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(st==e){
        return node;
    }
    int pos = search(inorder,st,e,curr);

    node->right=buildtree(postorder,inorder,pos+1,e);
    node->left=buildtree(postorder,inorder,st,pos-1);
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
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(postorder,inorder,0,4);
    inorderprint(root);
    return 0;
}
