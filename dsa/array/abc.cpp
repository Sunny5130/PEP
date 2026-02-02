#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    set<int>set;
    for(int i=0;i<n;i++){
        if(!set.count(arr[i])){
            ans.push_back(arr[i]);
        }
        set.insert(arr[i]);
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}
