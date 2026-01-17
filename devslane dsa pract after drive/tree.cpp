#include<bits/stdc++.h>
using namespace std;
//--------------------------------implementation of binary tree--------------//
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
//---------------------build a binary tree in style of preorder inputs----------------//
Node* buildtree(Node* head){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    cout<<"Insert at left of "<<data<<" : ";
    root->left=buildtree(root->left);
    cout<<"insert at right of "<<data<<" : ";
    root->right=buildtree(root->right);
    return root;
}
//-----------------------------------------level order traversal---------------//
void levelOrderByLevel(Node* root){
    if(root ==NULL)return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);   // Level separator
    while(!q.empty()){
        Node* temp =q.front();
        q.pop();
        // End of current level
        if(temp == NULL){
            cout << endl;
            if(!q.empty())q.push(NULL);
        }else{
            cout<<temp->data<<" ";
            if(temp->left !=NULL)q.push(temp->left);
            if(temp->right !=NULL)q.push(temp->right);
        }
    }
}
//--------------------Inorder traversal----left->root->right
Node* print(Node* root){
    Node* temp=root;
    if(root==NULL)return 0;
    print(temp->left);
    cout<<temp->data<<" ";
    print(temp->right);
}
int main(){
    Node* root=NULL;
    cout<<"Insert the root node of tree: ";
    root=buildtree(root);
    cout<<"Tree nodes are : ";
    print(root);
    cout<<endl;
    levelOrderByLevel(root);
}
// 5 4 3 2 1 -1 -1 -1 -1 -1 6 -1 7 -1 8 -1 9 -1 -1


