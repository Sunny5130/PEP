
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