
//-----------count frequecy of words in string------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     unordered_map<string,int>map;
//     string res="";
//     for(int i=0;i<s.length();i++){
//         res+=s[i];
//         if(s[i]==' '){
//             map[res]++;
//             res="";
//         }
//     }
//     map[res]++;

//     for(auto it=map.begin();it!=map.end();it++){
//         cout<<it->first<<" present "<<it->second<<" times"<<endl;
//     }
//     return 0;
// }

//-----------------------longest word from an string-------------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     string res="";
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         res+=s[i];
//         if(s[i]==' '){
//             int s=res.length();
//             if(s>ans.length())ans=res;
//             res="";
//         }
//     }
//     if(res.length()>=ans.length())ans=res;
//     cout<<ans;
//     return 0;
// }





//-------------------------remove integer and special character  from an array --------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     string res="";
//     for(int i=0;i<s.length();i++){
//         if(isalpha(s[i])){
//             s[i]=tolower(s[i]);
//             res+=s[i];
//         }else if(s[i]==' '){
//             res+=" ";
//         }
//     }
//     cout<<res;
// }


//---------------------------Palindrome string or not-----------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     string res="";
//     for(int i=s.length()-1;i>=0;i--){
//         res+=s[i];
//     }
//     if(res==s)cout<<"Palindrome";
//     else cout<<"Not palindrome";
// }

//--------------------------




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int max1=INT_MIN;
    // int max2=INT_MIN;
    // for(int i=0;i<n;i++){
    //     max1=max(max1,arr[i]);
    // }

    // for(int i=0;i<n;i++){
    //     if(arr[i]!=max1){
    //     max2=max(max2,arr[i]);
    // }
    // }
    // if(max2==INT_MIN)cout<<"There is no 2nd maxi ele";
    // else cout<<max2;

    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     ans.push_back(arr[i]);
    // }
    // sort(ans.begin(),ans.end());

    // int maxi=INT_MIN;
    // for(int i=ans.size()-2;i>=0;i--){
    //     if(arr[i]!=arr[i+1]){
    //         cout<<arr[i];
    //         return 0;
    //     }
    // }
    // vector<int>res;
//     for(int i=0;i<ans.size();i++){
//         for(int j=i;j<ans.size();j++){
//             if(i==j)continue;
//             if(arr[i]==arr[j]){
//                 if(res.empty() || res.back()!=arr[i]){
//                 res.push_back(arr[i]);
//                 break;
//                 }
//         }
//     }
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }

// }
    // unordered_map<int,int>map;
    // for(int i=0;i<n;i++){
    //     map[arr[i]]++;
    // }
    // for(auto it=map.begin();it!=map.end();it++){
    //     if(it->second==2)res.push_back(it->first);
    // }
    // if(res.size()==0)cout<<"No duplicate element";
    // else {
    //     for(int i=0;i<res.size();i++){
    //         cout<<res[i]<<" ";
    //     }
    // }

// }







//-------------------------valid parenthesis---------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// bool isparenthesi(string s){
//     stack<int>st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             st.push(s[i]);
//         }else{
//             if(st.empty())return false;
//             if((st.top()=='(' && s[i]==')') ||
//                (st.top()=='{' && s[i]=='}')||
//                (st.top()=='[' && s[i]==']')){
//                 st.pop();
//                }
//         }
//     }
//     return st.size()==0;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     if(isparenthesi(s))cout<<"True";
//     else{
//         cout<<"False";
//     }
    
// }



//-----------------------------Add binary string------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     int i=s1.length()-1;
//     int j=s2.length()-1;
//     int sum=0;
//     int carry=0;
//     string ans="";
//     while(i>0 || j>0 || carry){
//         sum=carry;
//         if(i>=0)sum+=s1[i--]-'0';
//         if(j>=0)sum+=s2[j--]-'0';
//         ans+=sum%2+'0';
//         carry=sum/2;
//     }
//     reverse(ans.begin(),ans.end());
//     cout<<ans;
// }



//----------------------find elements in range not present in array---------------------//
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Size of an array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Take an array input of size " << n << " : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int l, r;
//     cout << "Take input of left and right range: ";
//     cin >> l >> r;

//     sort(arr.begin(), arr.end());

//     int idx = 0;

//     for (int x = l; x <= r; x++) {
//         while (idx < n && arr[idx] < x)
//             idx++;

//         if (idx == n || arr[idx] != x) {
//             cout << x << " ";
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Size of an array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Take an array input of size " << n << " : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int l, r;
//     cout << "Take input of left and right range: ";
//     cin >> l >> r;
//     unordered_map<int,int>map;
//     for(int i=0;i<n;i++){
//         map[arr[i]]++;
//     }
//     for (int x = l; x <= r; x++) {
//         if (map.count(x)) {
//             cout << x << " ";
//         }
//     }
//     return 0;
// }




 //------------------swap two numbers without using extfra variablr----------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     //----first method using + - operator---------------//
//     // a=a+b;
//     // b=a-b;
//     // a=a-b;
//     //---------using xoroperation----------------//
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<a<<" "<<b;
// }


//------------reverse an array without using extra space----------------//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[ n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int j=0;
    // int rev[n];
    // for(int i=n-1;i>=0;i--){
    //     rev[j]=arr[i];
    //     j++;
    // }
    // cout<<"Reverse of an array is : ";
    // for(int i=0;i<n;i++){
    //     cout<<rev[i]<<" ";
    // }
    int i=0,j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"Reverse of an array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}