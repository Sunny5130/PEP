#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int h){
        this->data=h;
        this->left=this->right=NULL;
    }
};

//------------------------------------insertion in bst---------------------------------//
Node* insertBst(Node* root,int d){
    if(root==NULL){  //base case if tree parent root node is null
        root=new Node(d);
        return root;
    }
    if(d >root->data){
        root->right=insertBst(root->right,d);
    }else{
        root->left=insertBst(root->left,d);
    }
    return root;
}
//-----------------take input until user will not give -1 /----------------------//
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!= -1){
        root=insertBst(root,data);
        cin>>data;
    }
}
//-------------------------level order traversal--------------------------------------------//
void levelorder(Node* root) {
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << endl; 
    }
}
//-------------------------------------inorder traversal---------------------------------------//
void inorder(Node* &root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//-----------------------------------------minimum value from bst-------------------------------//

Node* minval(Node* &root){
    Node* temp=root;
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
}

//-------------------------------------maximum value from bst---------------------------------//
Node* maxval(Node* &root){
    Node* temp=root;
    while(temp->right !=NULL){
        temp=temp->right;
    }
    return temp;
}

//----------------------------------deletion a value from an bst------------------------------//
Node* deleteanode(Node* &root,int val){
    if(root==NULL){ //base case
        return root;
    }
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
        }
        //1 child
        //left child
        if(root->left !=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left==NULL &&root->right !=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->right!=NULL && root->left!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deleteanode(root->right,mini);
            return root;     
            
        }
    }else if(root->data > val){//left part mai gaye because dlete value root->data se badi hai
        root->left=deleteanode(root->left,val);
        return root;
    }else{//right part mai gaye
        root->right=deleteanode(root->right,val);
        return root;
    }
    // return root;
}

//---------------------------main function-----------------------------------//
int main(){
    Node* root=NULL;
    cout<<"Enter data to create a bst: "<<endl;
    takeinput(root);

    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"Level order traversal: "<<endl;
    levelorder(root);
    cout<<endl;

    deleteanode(root,10);
    deleteanode(root,5);
    deleteanode(root,6);
    cout<<"Inorder after deletion of node traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"Level order after deletion traversal: "<<endl;
    levelorder(root);
    cout<<endl;

    cout<<"Minimum element of this bst is: "<<minval(root)->data<<endl;
    cout<<"Maximum element of this bst is: "<<maxval(root)->data;
    cout<<endl;
    return 0;
}



// 10 6 11 5 12 4 17 1 3 20 -1