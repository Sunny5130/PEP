#include<bits/stdc++.h>
using namespace std;

//------------------------------------------binary Search----------------------------//
int main(){
    int a;
    cout<<"Take are size:";
    cin>>a;
    int arr[a];
    cout<<"Take array inputs: ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Take target input: ";
    cin>>target;

    // int l=0,r=a-1;
    // while(l<=r){
    //     int mid=(l+r)/2;
    //     if(arr[mid]==target){
    //         cout<<"Target value "<<target<<" at index: "<<mid;
    //         break;
    //     }else if(arr[mid]>target){
    //         r=mid-1;
    //     }
    //     else{
    //         l=mid+1;
    //     }
    // }
    //---------------------------minimum element in rotated sorted array-----------------------//
    return 0;
}