#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
    int x;
    int y;
    cout<<"Value of x is: ";
    cin>>x;
    cout<<"Value of y is: ";
    cin>>y;
    if(y==0)throw "Division by zero!";
    cout<<x/y;
    }catch(const char *err){
        cout<<"error: "<<err;
    }
}