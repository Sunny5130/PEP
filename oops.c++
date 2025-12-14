
//===============================================function overriding-----------------------------------=======================>>.
//-----same function but diffrent iplemenatiion==================..
// #include<iostream>
// using namespace std;
// class parent{
//     public:
//     virtual void saini(){
//         cout<<"I am Parent"<<endl;
//     }
// };
// class child:public parent{
//     public:
//     void saini(){
//         cout<<"i am child"<<endl;
//     }
// };
// int main(){
//     parent p;
//     child c;
//     p.saini();
//     c.saini();
// }


//-----------------------static keyword-------------------
// class saini{
//     public:
//     saini(){
//         cout<<"constructor"<<endl;
//     }
//     ~saini(){
//         cout<<"Delete oblect";
//     }
// };
// // void fun(){
//     static int x=0;
//     cout<<"x = "<<x<<endl;
//     x++;
// }
// int main(){
// // fun();
// // fun();
// // fun();
//     // saini s;
//     saini* s =new saini();
//     // delete s;
    
// }

// class encapsule{
//     int accoutno;
//     double balance;
//     public:
//     encapsule(int acc,double ruppes){
//         accoutno=acc;
//         balance=ruppes;
//     }
//     void details(){
//         // cout<<"My account number is : "<<accoutno<<endl;
//         cout<<"My balance for this account number is = "<<balance;
//     }
//     int setruppes(int h){
//         this->balance=h;
//     }

// };
// int main(){
//     encapsule e(200123,2000);
//     e.details();
//     cout<<endl<<endl;
//     e.setruppes(3000);
//     e.details();
// }



// #include <iostream>
// using namespace std;

// class Shape {   // Abstract class
// public:
//     // Pure virtual function
//     virtual void draw() = 0;  
// };

// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing Circle" << endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing Rectangle" << endl;
//     }
// };

// int main() {
//     // Shape s; //❌ Error: cannot create object of abstract class

//     Shape* s1 = new Circle();
//     Shape* s2 = new Rectangle();

//     s1->draw();   // Drawing Circle
//     s2->draw();   // Drawing Rectangle

//     delete s1;
//     delete s2;
// }


// #include<iostream>
// using namespace std;
// class Abstract{
//     public:
//     virtual void show()=0;
//     virtual ~ Abstract(){
//         cout<<"Deleted the object for inherited classes"<<endl;
//     }
// };
// class saini: public Abstract{
//     public:
//     void show() override{
//         cout<<"I am saini"<<endl;
//     }
// };
// class saini2: public Abstract{
//     public:
//     void show() override{
//         cout<<"I am saini2"<<endl;
//     }
// };
// int main(){
//     // Abstract a;
//     Abstract* s1=new saini;
//     Abstract* s2=new saini2;
//     s1->show();
//     s2->show();
//     delete s1;
//     delete s2;

// }

// #include <iostream>
// #include <thread>
// using namespace std;

// int counter = 0;  // shared variable

// void task() {
//     for (int i = 0; i < 100000; i++) {
//         counter++;  // race condition here
//     }
// }

// int main() {
//     thread t1(task);
//     thread t2(task);

//     t1.join();
//     t2.join();

//     cout << "Final counter (without mutex) = " << counter << endl;
//     return 0;
// }









//---------------------------------------14 december pract----------------------//
#include<bits/stdc++.h>
using namespace std;
// class saini{
//     int a;
//     char b;
//     char c;
//     char f;
//     char t;
//     char z;
//     int d;

// };
// int main(){
//     saini s;
//     cout<<sizeof(s);

// }

// class saini{
//     int a;
//     float b;
//     public:
//     void setab(int a,float b){
//         this->a=a;
//         this->b=b;
//     }
//     void get(){
//         cout<<a<<" "<<b<<endl;
//     }
//     int x=5;
// };
// int main(){
//     saini s;
//     s.setab(2,4);
//     s.get();
//     cout<<s.x;
// }

//------------------------------------------setter and geteer
// class saini{
//     int length;
//     int breadth;
//     public:
    
//     void setlb(int a,int b){
//         this->length=a;
//         this->breadth=b;
//     }
//     int area(){
//         return length* breadth;
//     }
//     int perameter(){
//         return 2*(length+breadth);
//     }
// };
// int main(){
//     saini s;
//     s.setlb(2,3);
//     cout<<"Area of rectangele is: "<<s.area()<<endl;
//     cout<<"Perameter of rectangele is: "<<s.perameter();
// }


//-----------------------static and dynamic object creation-------------------------------//
// class saini{
//     int x;
//     int y;
//     public:
//     int h=3;
// };
// int main(){
//     saini s;
//     saini *s1=new saini;
//     cout<<s.h<<endl;
//     cout<<s1->h<<endl;
//     cout<<(*s1).h<<endl;

// }

//---------------------------------constructior and destructior--------------------------//
// class saini{
//     int a,b;
//     public:
//     saini(int x,int y){
//         this->a=x;
//         this->b=y;
//     }
//     int area(){
//         return a*b;
//     }
//     void pera(){
//         cout<<"Copy constructor"<<endl;
//         cout<<"area: "<<a*b;
//     }
//     ~saini(){
//         cout<<"Destuctor called"<<endl;
//     }

// };
// int main(){
    // saini s(2,3);
    // saini *s=new saini;
    // cout<<"AREA: "<<s.area()<<endl;
    // saini s1(s);
    // s1.pera();
// }

//--------------------encapsulation-------------------//
// class saini{
//     int x,y;
//     public:
//     void set(int a,int y){
//         this->x=a;
//         this->y=y;
//     }
//     int get(){
//         return x*y;
//     }
// };
// int main(){
//     saini s;
//     s.set(2,7);
//     cout<<s.get();
// }

//---------------------------inheritance-------------------------------//

//---(1)single inheritance

// class parent{
//     protected:
//     int x=5;

// };
// class child: protected parent{
//     public:
//     int xv(){
//         return x;
//     }
// };
// int main(){
//     child c;
//     cout<<c.xv();
// }

//------------multiple inheritance---------
// class saini{
//     public:
//     void pera(){
//         cout<<"I am saini"<<endl;
//     }
// };
// class saini2{
//     public:
//     void pera(){
//         cout<<"I am saini2"<<endl;
//     }
// };
// class child: public saini,public saini2{
// };
// int main(){
//     child c;
//     c.saini::pera();
//     c.saini2::pera();
// }

//-----------multi level inheritance-------------
// it forming a chain like structure in which one derived class is inherit from another derived class
// class a{
//     public:
//     int x=2;

// };
// class b:public a{

// };
// class c:public b{

// };
// int main(){
//     c c;
//     cout<<c.x;
// }

//------herarical inheritance---
//multple derived class is inherit from same parent class
// class parent{

// };
// class child1:public parent{

// };
// class child2: public parent{

// };
// int main(){
//     parent s;
    
// }