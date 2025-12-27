// what is tree--> tree is non-linear data structure or a heriraachical data structure where nodes are connected to another nodes
//generic tree->>a tree where unlimited number of children connected to a node
// binary tree--> a tree where a each node have atmost 2 children(either 0,1 and 2)
// full binary tree-> a tree where each node have exactly 0 or 2 children not eaclty 1 children)
//complete binary free-> a tree where all levels are field except of last nodes and last nodes is also field from left to right with no gap in between
// perfect binary tree--> a binary tree where all internal nodes have 2 childrens and all leaf nodes are at same level
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int h){
        this->data=h;
        this->left=NULL;
        this->right=NULL;
    }
};
//------------------------------build a tree-----------------------------------------//
node* buildtree(node* root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data insert at left of "<<data<<" node: "<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data insert at right of "<<data<<" node: "<<endl;

    root->right=buildtree(root->right);

}
//-------------------------------Level order traversal of a binary tree
// void levelorder(node*root){
//     if(root==NULL)return;
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         cout<<temp->data<<" ";
//         q.pop();                                   //it will print all element in a single line but order wise//
//     if(temp->left){
//         q.push(temp->left);
//     }
//     if(temp->right){
//         q.push(temp->right);
//     }
//     }
// }

void levelorder(node* root) {
    if(root == NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << endl; 
    }
}
void inorder(node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=NULL;
    root= buildtree(root);
    cout<<endl<<"level order traversal is: "<<endl;
    levelorder(root); 
    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is: ";
    postorder(root);
    
    return 0;
}


// 5 2 3 -1 3 -1 -1 -1 6 7 -1 8 -1 -1 -1
// 3 9 20 -1 -1 15 7