// #include<bits/stdc++.h>
// using namespace std;
// bool prime(int n){
//     if(n<=1)return false;
//     if(n==2)return true;
//     if(n%2==0)return false;
//     for(int i=3;i*i<=n;i+=2){
//         if(n%i==0)return false;
//     }
//     return true;
// }
// int main(){
//     int a;
//     cin>>a;
//     for(int i=2;i<=a;i++){
//         if(prime(i))cout<<i<<" ";
//     }
//     // if(prime(a))cout<<a<<" is prime";
//     // else cout<<a<<" is not prime";
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string ans;
//     cin>>ans;
//     int l=0,r=ans.length()-1;
//     while(l<=r){
//         if(ans[l]!=ans[r]){
//             cout<<"Not palindrome";
//             return 0;
//         }
//         l++;
//         r--;
//     }
//     cout<<"palindrome";
//     return 0;
// }

// int main(){
//     int a;
//     cin>>a;
//     int rev=0;
//     while(a>0){
//         int r=a%10;
//         rev=rev*10+r;
//         a=a/10;
//     }
//     cout<<rev;
// }


//----------------from an unsorted array-----------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     vector<int>nums(a);
//     for(int i=0;i<a;i++){
//         cin>>nums[i];
//     }
//     unordered_map<int,int>map;
//     for(int i=0;i<a;i++){
//         map[nums[i]]++;
//     }
//     int i=0;
//     for(auto it=map.begin();it!=map.end();it++){
//         {nums[i++]=it->first;}
//     }

//     for(int j=0;j<i;j++){
//         cout<<nums[j]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     vector<int>nums(a);
//     for(int i=0;i<a;i++){
//         cin>>nums[i];
//     }
//     vector<int>ans;
//     ans.push_back(nums[0]);
//     for(int i=1;i<a;i++){
//         if(nums[i]!=nums[i-1]){
//             ans.push_back(nums[i]);
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     vector<int>nums(a);
//     for(int i=0;i<a;i++) cin>>nums[i];

//    int maxi=*max_element(nums.begin(),nums.end());
//     vector<int>freq(maxi+1,0);
//     int j=0;
//     for(int i=0;i<a;i++){
//         if(freq[nums[i]]==0){
//            nums[j]=nums[i];
//            j++;
//         }
//         freq[nums[i]]=1; 
//     }
//     for(int i=0;i<j;i++){
//         cout<<nums[i]<<" ";
//     }  
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int l=0,r=n-1;
//     while(l<=r){
//         int mid=(l+r)/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             break;
//         }else if(arr[mid]>target){
//                 r=mid-1;
//         }else{
//             l=mid+1;
//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string ans;
//     while(n!=0){
//         int r=n%2;
//         ans+=(r+'0');
//         n/=2;
//     }
//     reverse(ans.begin(),ans.end());
//     cout<<ans;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= n; i++) {
//     for(int j = 1; j <= i; j++) {
//         cout << "*";
//     }
//     cout << endl;
// }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++)cout<<" ";
//         for(int j=1;j<=i;j++)cout<<"*";
//         cout<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++)cout<<" ";
//         for(int j=1;j<=2*i-1;j++)cout<< "*";
//         cout<<endl;
//     }
//     return 0;
// }



//     *
//    ***
//   *****
//  *******
// *********


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++)cout<<" ";
//         for(int j=1;j<=2*i-1;j++)cout<<"*";
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++)cout<<"*";
//         cout<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)cout<<" ";
        for(int s=1;s<=i;s++)cout<<"*";
        cout<<endl;
    }
}



