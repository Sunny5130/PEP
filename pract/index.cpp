
//-------------------------------------------------------Inheritance----------------------------------------//

//-------------------------------------------------------Diamond problem--------------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     void saini(){
//         cout<<"I am class A function";
//     }
// };
// class B: virtual A{
//     public:
//     void show(){
//         cout<<"I am class B function";
//     }

// };
// class C:virtual public A{

// };
// class D:public B,public C{

// };
// int main(){
//  D d;
//  d.saini();
// }

// #include<bits/stdc++.h>
// using namespace std;

//-------------------------------multiple inheritance---------------------------//
// class saini{
//     public:
//     void show(){
//         cout<<"I am class saini function";
//     }
// };
// class saini2{
//     public:
//     void show(){
//         cout<<"I am class saini2 function";
//     }
// };
// class saini3:public saini,public saini2{
    
// };

//--------------------------------------single inheritance------------------------//
// class A{

// };
// class B:public A{

// };

//----------------------------------multi level inheritance-----------------------------//
// class A{

// };
// class B:public A{

// };
// class C:public B{

// };
// class D:public C{

// };

//-----------------------------------------herirarical inheritance------------------------//
// class A{

// };
// class B:public A{

// };
// class C:public A{

// };
// int main(){
//     // saini3 *b=new saini3();
//     // b->saini::show();
// }

//-----------------------------------------encapsulation---------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class saini{
//     private:
//     int a,b;
//     public:
//     // saini(int x,int y){
//     //     this->a=x;
//     //     this->b=y;
//     // }
//     // void out(){
//     //     cout<<a<<" "<<b;
//     // }
//     void set(int x,int y){
//         this->a=x;
//         this->b=y;
//     }
//     int get(){
//         return a*b;
//     }
//     int area(){
//         return a*b;
//     }
// };
// int main(){
//     // saini s(2,3);
//     // s.out();
//     // saini * s1=new saini(2,3);
//     // s1->out();

//     saini s;
//     s.set(2,3);
//     cout<<"Area of rectangle is: ";
//     cout<<s.get();
// }


//------------------------------------------------constructor------------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class saini{
//     int x,y;
//     public:
//     saini(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
//     void get(){
//         cout<<"I am a copy constructor"<<endl;
//         cout<<x<<" "<<y;
//     }

// };
// int main(){
// //    saini s         //                simple constructor
//     saini s(2,3);  ///----------->> assignment constructor
//     saini s2(s);   ///----------->> copy constructor
//     s2.get();
// }


///-----------------------Polymorphisam-------------------------//

//(1)--------------------------Compile time polimorphisam-----------------------//

// #include<bits/stdc++.h>
// using namespace std;
// void saini(){
//     cout<<" i am saini"<<endl;
// }
// void saini(int x){
//     cout<<"I am saini with x value: "<<x<<endl;
// }
// int saini(int x,int y){
//     return x*y;
// }
// float saini(float x,float y){
//     return x*y;
// }
// string saini(string x){
//     return x;
// }
// int main(){
//     saini();
//     saini(2);
//     cout<<saini(1,2)<<endl;
//     cout<<saini(3.2f,4.3f)<<endl;
//     cout<<saini("Sunny saini Sahab");
// }

//(2)-----------------------------------Operator overloading----------------------------//
#include <bits/stdc++.h>
using namespace std;

class saini{
    int x;
public:
    saini(int x = 0) {
        this->x = x;
    }
    saini operator- (saini obj) {
        saini s;
        s.x = x + obj.x;   //////// we can perform what we want + - * / % as all------------//
        return s;
    }
    void show() {
        cout<<x;
    }
};
int main() {
    saini n1(10), n2(20);
    saini n3 = n1 - n2;   
    n3.show();             
}

//-----------------------------------runtime polimorphisam-----------------------------//
//--------Function overriding-----------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class saini{
//     public:
//     virtual void show(){
//         cout<<"I am saini class function"<<endl;
//     }
// };
// class saini2:public saini{
//     public:
//     void show() override{
//         cout<<"I am saini2 class function"<<endl;
//     }
// };
// int main(){
// saini *s=new saini();
// saini *s1=new saini2();
// s->show();
// s1->show();
// }


//---------------------------------------------Abstraction--------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class abstract{
//     public:
//     virtual void show()=0;
// };
// class saini:public abstract{
//     public:
//     void show() override{
//         cout<<"I am class saini function"<<endl;
//     }
// };
// class saini2:public abstract{
//     public:
//     void show() override{
//         cout<<"I am class saini2 function"<<endl;
//     }
// };
// int main(){
//     abstract *b=new saini();
//     abstract *b1=new saini2();
//     b->show();
//     b1->show();
// }
