// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int a;
//     cin >> a;
//     int arr[a];
//     for(int i = 0; i < a; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr + a);
    
//     cout << arr[a-2] << endl;//second largest
//     cout << arr[1] << endl;//second smallest
//     cout << arr[1] << endl;//second smallest

//     return 0;
// }

// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int mini=min(a,b);
    int maxi=0;
    for(int i=0;i<=mini;i++){
        if(a%i==0 && b%i==0){
        maxi=max(maxi,i);
        cout<<maxi;
        }
    }
    cout<<"The GCD of "<<a<<" and" <<b<<" is "<<maxi;
    return 0;
}