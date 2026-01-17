#include<bits/stdc++.h>
using namespace std;
//----------------------Structure of linklist Node--------------------------------------------//
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
//----------------------------------------Insert node at beginning--------------------------------//
Node* insertAtbig(Node* &head,int val){
    if(head==NULL){
        Node* temp=new Node(val);
        return temp;
    }
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    return head;
}
//--------------------------------------Insert node at last--------------------------------------//
Node* insertAtlast(Node* head,int val){
    if(head==NULL){
        Node* temp=new Node(val);
        return temp;
    }
    Node* temp=head;
    Node* newNode=new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
//---------------------------------------Insert at specific position----------------------------//
Node* insertAtpos(Node* &head,int pos,int val){
    if(pos==1){
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* temp=head;
    int count=1;
    while(temp!=NULL && count<pos-1){
        temp=temp->next;
        count++;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
//----------------------searc node is exist or not in linklist whose node value is---------------//
void checkNodexist(Node* &head,int nodeval){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==nodeval){
            cout<<nodeval<<" is exist in this linklist"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<nodeval<<" is not exists in this linklist"<<endl;
}
//------------------delete node from link list whose value is------------------------------------//
Node* deleteNodeval(Node* &head,int val){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* node=temp->next;
            temp->next=temp->next->next;
            delete node;
            return head;
        }
        temp=temp->next;
    }
    cout<<val<<" node doesn't exist in link list";
    return head;
}
//----------------------------------Print link list----------------------------------------------//
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
//---------------------------------Main function or method---------------------------------------//
int main(){
    Node* list=new Node(-1);
    Node* temp=list;

    cout<<"Insert at beginning : ";
    insertAtbig(temp,1);
    insertAtbig(temp,2);
    insertAtbig(temp,3);
    print(temp);
    cout<<endl;

    cout<<"Insert at last : ";
    insertAtlast(temp,4);
    insertAtlast(temp,5);
    print(temp);
    cout<<endl;

    cout<<"Insert at position: ";
    insertAtpos(temp,1,6);
    insertAtpos(temp,3,7);
    print(temp);
    cout<<endl;

    //check node exist or not
    // checkNodexist(temp,5);
    // checkNodexist(temp,32);
    // checkNodexist(temp,1);
    // checkNodexist(temp,10);

    cout<<"Delete Node "<<2<<" : ";
    deleteNodeval(temp,2);
    print(temp);
    cout<<endl;
    cout<<"Delete Node "<<23<<" : ";
    deleteNodeval(temp,23);
    cout<<endl<<"List: ";
    print(temp);
}

