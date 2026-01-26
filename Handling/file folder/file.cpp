#include<bits/stdc++.h>
using namespace std;
int main(){

    //writing file 
    // ofstream outfile("data.txt");
    // outfile<<"Hello ji i am writing in this file";
    // outfile.close();

    // writing file 
    ofstream outfile("data.txt",ios::app);
    outfile<<"i am appending the data inside the file ";
    outfile.close();

    //delete file
    // remove("data.txt");   // deletes the file completely

    // ofstream out("data.txt",ios::trunc);
    // delete data from file but file as it keep

    //reading file
    ifstream infile("data.txt");
    string s;
    getline(infile,s);
    cout<<s;
    infile.close();
}