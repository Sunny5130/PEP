#include<iostream>
#include<list>
using namespace std;
class Stack{
    public:
    list<int>ll;

    void push(int h){
        ll.push_front(h);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool empty(){
        return (ll.size()==0);
    }

};
int main(){
Stack s;
s.push(1);
s.push(2);
s.push(3);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
s.push(3);
cout<<"Top element of stack is: "<<s.top()<<endl;
}