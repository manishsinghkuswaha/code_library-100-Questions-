#include<iostream>
using namespace std;
struct Node
{
    Node *left,*right;
    int data;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isidentical(Node* root1,Node* root2)
{
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1= root1->data==root2->data;
        bool cond2= isidentical(root1->left,root2->left);
        bool cond3= isidentical(root1->right,root2->right);
        if(cond1&&cond2&&cond3){
            return true;
        }
        return false;
    }
}
int main()
{
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    Node* root2 = new Node(1);
    root2->left = new Node(3);
    root2->right = new Node(3);
    if(isidentical(root1,root2)){
        cout<<"Identical"<<endl;
    }
    else{
        cout<<"Non identical"<<endl;
    }
}
