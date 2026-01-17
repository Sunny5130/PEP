#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"No of array: ";
    cin>>n;
    cout<<"No of elements: ";
    cin>>m;
    vector<vector<int>>nums(n,vector<int>(m));
    cout<<'[';
    for(int i=0;i<n;i++){
        cout<<'[';
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
            if(j<m-1)cout<<',';
        }
        cout<<']';
         if (i<n-1)cout << ",";
    }
    cout<<']'<<endl;

//-----------------------------merge intervals------------------------------//
    sort(nums.begin(),nums.end());

    vector<vector<int>>res;
    res.push_back(nums[0]);
    for(int i=1;i<n;i++){
        if(res.back()[1]>=nums[i][0]){
            res.back()[1]=nums[i][1];
        }else{
            res.push_back(nums[i]);
        }
    }



    cout<<"[";
    for(int i=0;i<res.size();i++){
        cout<<'[';
        for(int j=0;j<2;j++){
            cout<<res[i][j];
            if(j<m-1)cout<<",";
        }
        cout<<']';
        if(i<res.size()-1)cout<< ",";

    }
    cout<<"]";
}