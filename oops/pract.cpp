
//----------------------------Revision of object oriented programming------------------------------------------------------//
#include<bits/stdc++.h>
using namespace std;

//----------------------sizeof----------------------------
// class saini{
//     public:
//     int x;
//     char y;
//     double c;
//     string s;

// };
// int main(){
// saini s;
// cout<<sizeof(s)<<" bytes";
// }

//------------------getter and setter-----------------------
// class saini{
//     private:
//     int x,y;
//     public:
//     void set(int p,int q){
//         this->x=p;
//         this->y=q;
//     }
//     int area(){
//         return x*y;
//     }
// };
// int main(){
//     saini s;
//     s.set(3,4);
//     cout<<"Area: "<<s.area()<<endl;

//     return 0;
// }

//--------------------access modifier--------------------
//                public,private,protected
// class saini{
//     private:
//     int x=1;
//     public:
//     int y=2;
//     protected:
//     int z=3;
// };
// int main(){
//     saini s;
//     cout<<s.y;
// }

//--------------object allocation sttic and dynamic----------------------
// class saini{
//     public:
//     saini(){
//         cout<<"object created successfully"<<endl;
//     }
//     ~saini(){
//         cout<<"object deleted from memory"<<endl;
//     }
// };
// int main(){
//     saini s;
//     saini *s1=new saini();
//     delete s1;
// }

//----------------------------------constructor--------------------------------
//it is use to intialize datamember of a class-
// type of constructor default constructor,peraetrized and copy constuctor 
// class saini{
//     public:
//     int x;
//     //default constructor
//     saini(){
//         cout<<"default constructor"<<endl;
//     }
//     //perametrized constructor
//     saini(int x){
//         this->x=x;
//     }
// };
// int main(){
//     saini s;
//     saini s2(3);
//     cout<<s2.x;
// }

// class saini{
//     int x,y;
//     public:
//     saini(int p,int q){
//         this->x=p;
//         this->y=q;
//     }
//     void areaobjecta(){
//         cout<<"area: "<<x*y<<endl;
//     }
//     void areaobjectbB(){
//         cout<<"area: "<<x*y<<endl;
//     }
// };
// int main(){
//     saini s(2,3);
//     s.areaobjecta();    
//     saini s2(s);
//     s2.areaobjectbB();
// }

// class saini{
//     int x,y;
// public:
//     saini(int p,int q){
//         x = p;
//         y = q;
//     }
//     saini(const saini &obj){
//         x = obj.x;
//         y = obj.y;
//     }
//         void areaobjecta(){
//         cout<<"area: "<<x*y<<endl;
//     }
//     void areaobjectbB(){
//         cout<<"area: "<<x*y<<endl;
//     }
// };
// int main(){
//     saini s(2,3);
//     s.areaobjecta();    
//     saini s2(s);
//     s2.areaobjectbB();
// }

//------------destructor---------------//

//-------------static keyword----
//  it hold the memory does create again and again
// void saini(){
//     static int x=2;
//     cout<<"x: "<<x++<<endl;
// }
// int main(){
//     saini();
//     saini();
//     saini();
// }


// class saini{
//     public:
//     static int x;
//     saini(){
//         x++;
//     }
// };
// int saini::x=0;
// int main(){
//     saini s;
//     cout<<s.x<<endl;
//     saini s1;
//     cout<<s1.x<<endl;
//     saini s2;
//     cout<<s2.x<<endl;
// }

// --------------------------------four pillers of oops----------------------


//(1)---encapsulation-binding the data memebr and member function inside ina class and do private the datatmember access memebr function using public getter abd setter

// class saini{
//     private:
//     int x,y;
//     public:
//     void set(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
//     int get(){
//         return x*y;
//     }
// };
// int main(){
//     saini s;
//     s.set(2,3);
//     cout<<"area: "<<s.get()<<endl;
//     return 0;
// }

//--------------------------------------------inheritance------------------------------------//
//in inheritance we inherit the property of paret class into derived or child class for more functionality code modular code reusable
//types of inheitance  sinle,multiple,multilevel,heriracical,hyrid

// Parent                   Child             Result
//public                    public            public
//public                    private           private
//public                    protected         protected

//private                  public             Not accessible
//private                  private            Not accessible
//private                  protected          Not accessible

//protected                public             protected
//protected                private            private
//protected                protected          protected

//-------single inheritance---------
//a derived class inherit from only single parent class
// class A{

// };
// class B:public A{

// };
// int main(){

// }

//-------multiple inheritance-------
//a derived class is inherit from multiple parent class
// class A{

// };
// class B{

// };
// class C:public A,public B{

// };
// int main(){

// }

//----------multi level inheritance--------
// a child class is inheri from another child class and form a chain like structue a->b->c  so a and c are indirectly inherit to each other
// class A{

// };
// class B:public A{

// };
// class C:public B{

// };
// int main(){

// }

//---------heraricel inheritance-----------
//multiple derived class is inherit from single parent class
// class A{

// };
// class B:public A{

// };
// class C:public A{

// };
// int main(){

// }

//-----------hybrid inheritance----------
//any mixture of two or more inheritance is called hybrid inheritance
// class A{

// };
// class B{

// };
// class C:public A{

// };
// class D:public A,public C{

// };
// int main(){

// }


//----------inheritance ambiguity in multiple inheritance--------------
// class A{
//     public:
//     void pera(){
//         cout<<"This is class A"<<endl;
//     }
// };
// class B{
//     public:
//     void pera(){
//         cout<<"this is class B"<<endl;
//     }
// };
// class C:public A,public B{

// };
// int main(){
//     // C *c=new C();
//     // // c->pera();    //it will give amiguity
//     // //so we are using scope resolution operator to solve this problem
//     // c->A::pera();
//     // c->B::pera();
//     A* a=new C();
//     a->pera();
// }

//----------------diamond problem-----------------
// class A{
//     public:
//     void pera(){
//         cout<<"This is class A "<<endl;
//     }
// };
// class B:virtual public A{

// };
// class C:virtual public A{

// };
// class D:public B,public C{

// };
// int main(){
//     D* d=new D();
//     d->pera();
// }

//-----------------polymorphism------------------------------//
//it means many form
//there are two type of polymorphism first one is compile time and second one is runtime
//  compile time is static and also divided into two first is function overloading and second is operator overloading
//  runtime is don't divied it has only 1 type function overriding

//-----function overloading
// void saini(){
//     cout<<"This is saini no argument function"<<endl;
// }
// void saini(int x){
//     cout<<"This is argument function with value: "<<x<<endl;
// }
// int saini(int x,int y){
//     return x*y;
// }
// float saini(float x,float y){
//     return x*y;
// }
// int main(){
//     saini();
//     saini(2);
//     cout<<saini(2,3)<<endl;
//     cout<<saini(2.3f,3.23f);
// }

// class saini{
//     public:
//     void pera(){
//         cout<<"This is no argument pera function "<<endl;
//     }
//     int pera(int x){
        
//         return (cout<<"perameterized function"<<endl,x);
//     }
// };
// int main(){
//     saini *s=new saini();
//     s->pera();
//     cout<<s->pera(2);
// }


//------function overriding----------------
// class saini{
//     public:
//     virtual void pera(){
//         cout<<"This is saini class pera function"<<endl;
//     }
// };
// class saini2:public saini{
//     public:
//     void pera() override{
//         cout<<"this is second saini2 class pera function"<<endl;
//     }
// };
// int main(){
// // saini *s=new saini();
// // s->pera();
// // delete s;
// // s=new saini2();
// // s->pera();
// saini s;
// saini2 s2;
// saini *s1=&s;
// s1->pera();
// s1=&s2;
// s1->pera();
// }

//---------------------------------Abstarction-----------------------
//we are using abstraction for data hiding and providing an efficient view to user friendly integrface
//so we are using abstract class-> a abstarct class is a class in which should contain atkeat 1 pure virtual function and we can't create object or instance of that class


// class abstract{
//     public:
//     virtual void pera()=0;
// };
// class child:public abstract{
//     public:
//     void pera()override{
//         cout<<"Hello ji this is child class"<<endl;
//     }
// };
// class child2:public abstract{
//     public:
//     void pera()override{
//         cout<<"Hello ji this is second child  class"<<endl;
//     }
// };
// int main(){
//     abstract * c=new child();
//     abstract * c2=new child2();
//     c->pera();
//     c2->pera();
// }






//-------------------------------------templates-------------------------------
//if we are write same function behavior but diffrent datatype then we can use templates
// template<typename T>
// T saini(T a,T b){
//     return a+b;
// }
// int main(){
//     cout<<saini(2,3)<<endl;
//     cout<<saini(2.3,2.4);
// }


//exception handling
//-------it mean program give error at run time---------------
// int main(){
//     int a,b;
//     try{
//         cin>>a>>b;
//         if(b==0){
//             throw "denomentor or b should not be 0";
//         }else{
//             cout<<"A/b: "<<a/b<<endl;;
//         }
//     }catch(const char* err){
//         cout<<err;
//     }
// }

// int main(){
//     int x;
//     try{
//         cin>>x;
//         if(isalnum(x)){
//             throw "x should be integer";
//         }else{
//             cout<<"x: "<<x;
//         }

//     }catch(const char* err){
//         cout<<err<<endl;
//     }
// }


//------------------------file handling-----------------------------


//-----------------------------operator oveloading-------------------------------//

//-----------------------------Deep copy and shallowcopy-------------------------//