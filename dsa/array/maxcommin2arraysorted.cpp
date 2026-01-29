#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Size of array1: ";
    cin>>a;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int b;
    cout<<"Size of array2: ";
    cin>>b;
    int arr2[b];
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    // int i=a-1,j=b-1;
    // int ans=0;
    // while(i>=0 && j>=0){
    //     if(arr[i]>arr2[j])i--;
    //     else if(arr[i]<arr2[j])j--;
    //     else{
    //         cout<<arr[i];
    //         return 0;
    //     }
    // }
    // if(ans==0)cout<<"There is no common element in 2 array";
    int maxi=0;
    unordered_set<int>set(arr.begin(),arr.end());
    for(int i=0;i<b;i++){
        if(set.count(arr2[i])){
            maxi=max(maxi,arr2[i]);
        }
    }
    cout<<maxi;

    return 0;
}