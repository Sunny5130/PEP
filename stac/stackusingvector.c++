#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
        vector<int>v;
        void push(int h){  //O(1)
            v.push_back(h);
        }
        void pop(){       //O(1)
            v.pop_back();
        }
        int top(){         //O(1)
            return (v[v.size()-1]);
        }
        bool empty(){
        return (v.size()==0);
        }

};
int main(){
Stack s;
s.push(2);
s.push(2);
s.push(3);
s.push(3);
s.pop();
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
s.push(12);
// s.pop();
cout<<"Check stack is empty or not: "<<s.empty(); //1 for no value and 0 for values
cout<<endl; 
cout<<"top element of stack is: "<<s.top()<<endl;
}