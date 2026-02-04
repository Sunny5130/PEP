#include<bits/stdc++.h>
using namespace std;
// int sum(int n){
//     if(n==1)return 1;
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"Sum of 1 to "<<n<<" is: "<<sum(n);
//     return 0;
// }

// int fact(int n){
//     if(n==1)return 1;
//     return n *fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"factorial of "<<n<<" is: "<<fact(n);
//     return 0;
// }

int fabonni(int n){
    if(n==1)return 0;
    return fabonni(n-2) + fabonni(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of fabonnic "<<n<<" term is: "<<fabonni(n);
    return 0;
}