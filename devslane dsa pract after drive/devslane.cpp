
//(1) factorial of a number using recursion---------------------------------//
#include<bits/stdc++.h>
using namespace std;
// int fact(int n){
//     if(n==0 ||n==1)return 1;
//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
// }


// 2. Given two integers, return a vector containing all integers between them (inclusive).
// vector<int>ans(int a,int b){
//     vector<int>res;
//     for(int i=a;i<=b;i++){
//         res.push_back(i);
//     }
//     return res;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     vector<int>ans1=ans(a,b);
//     for(int i=0;i<ans1.size();i++){
//         cout<<ans1[i]<<" ";
//     }
// }


// 3. Given a palindrome number, find the next palindrome number (no brute force).
    // bool pali(int n){
    //     int orig=n;
    //     int rev=0;
    //     while(n!=0){
    //         int d=n%10;
    //         rev=rev*10+d;
    //         n=n/10;
    //     }
    //     if(orig==rev)return true;
    //     return false;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     n++;
    //     while(n){
    //         if(pali(n)){
    //             cout<<n;
    //             return 0;
    //         }
    //         n++;
    //     }
    // }
// 4. Given an integer `n` and a vector of size `n-1` containing numbers from `1` to `n`, find the missing number.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n-1];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }
//     int tsum=(n*(n+1))/2;
//     int sum=0;
//     for(int i=0;i<n-1;i++)sum+=arr[i];
//     cout<<tsum-sum;
// }

// 5. Check whether a number is palindrome or not without converting it to a string.
// int main(){
//     int n;
//     cin>>n;
//     int orig=n;
//     int rev=0;
//     while(n!=0){
//         rev=rev*10+(n%10);
//         n=n/10;
//     }
//     if(orig==rev)cout<<"True";
//     else cout<<"false";
//     return 0;
// }
// 6. Given a string containing only `(` and `)`, return `true` if valid parentheses, else `false` (no extra space / no stack).
// int main(){
//     string s;
//     cin>>s;
//     int c1=0;
//     int c2=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(')c1++;
//         else{
//             c2++;
//             if(c2>c1){
//                 cout<<"False";
//                 return 0;
//             }
//         }
//     }
//     if((c1-c2)!=0){
//         cout<<"False";
//         return 0;
//     }
//     cout<<"True";
// }
// 7. Given an integer, rearrange its digits to get the next greater element if not present then return then print number same;

// 8.Given an integer Sum all digital of integer and sum until the integer is in form single digit
// int shor(int n){
//     int sum=0;
//     while(n!=0){
//         sum+=n%10;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n>=10){
//          n=shor(n);
        
//     }
//     cout<<n;
//     return 0;
// }
