
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
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=s1.length()-1;
    int j=s2.length()-1;
    int sum=0;
    int carry=0;
    string ans="";
    while(i>0 || j>0 || carry){
        sum=carry;
        if(i>=0)sum+=s1[i--]-'0';
        if(j>=0)sum+=s2[j--]-'0';
        ans+=sum%2+'0';
        carry=sum/2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}





