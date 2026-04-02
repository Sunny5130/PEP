#include<bits/stdc++.h>
using namespace std;

//------------------------------datatype sizes, padding and offset----------
// class saini{
//     public:
//     int a;
//     char v;
//     double s;

// };
// int main(){
//     saini s;
//     cout<<sizeof(s);
// }


//------------------geteter and setter-----------------------//
// class saini{
//   private:
//     int x=3;
//     int y=4;
//   public:
//   int area(){
//     cout<<"Area of a*b: ";
//     return x*y;
//   }
//   void setab(int x,int y){
//     this->x=x;
//     this->y=y;
//   }
// };
// int main(){
//     // saini s;
//     // cout<<s.area()<<endl;
//     // s.setab(2,3);
//     // cout<<s.area();
//     saini *s=new saini();
//     s->setab(5,5);
//     cout<<s->area();
// }


//--------------------------------object creation at run time and compile time------------------//
// class saini{
//     private:
//     int x,y;
//     public:
//     saini(){
//         cout<<"Construct called"<<endl;
//     }
//     ~saini(){
//         cout<<"Destructor called"<<endl;
//     }
// };
// int main(){
//     // saini s;
//     saini *s=new saini();
//     delete s;
// }


//-----------------------tyoes of constructor  implicet default constructor, default consytructor, copy constructor and perameterized constructor
// class saini{
//     int x,y;
//     public:
//     saini(){
//         cout<<"Deafult constructor called"<<endl;
//     }
//     saini(int a,int b){
//         this->x=a;
//         this->y=b;
//         cout<<"Perameterized constructor called"<<endl;
//     }
//     ~saini(){
//         cout<<"Destructor called"<<endl;
//     }
//     int area(){
//         return x*y;
//     }
// };
// int main(){
//     //if we have not create any object then implicet deafult constructor will called
//     // saini s;
//     saini s(2,3);
//     saini a(s);
//     cout<<a.area()<<endl;
    
// }



// ----------------------------------------static data memeber and member function----------------------------------------------//
//------------------------------statci means it will create memory for its member only ones and then reuse again and againi;-----//

// void saini(){
//    static int x=0;
//    cout<<"x: "<<x<<endl;
//    x++;
// }
// int main(){
//     saini();
//     saini();
//     saini();
// }


//----------------------------Four pillers of oops---------------------------------------------//


//(1)---------------------------encapsulation------------------------------------------------//
//in enapsulation be binding the data memeber and member function into a single class and capsule like structure-----
// use to provide security to data mebers for don't access or used another interface or class. in which we provide private to data members and access through public getter and setter
// class saini{
//   private:
//     int x;
//     int y;
//   public:
//   int access(){
//     cout<<"X: "<<x<<endl;
//     cout<<"Y: "<<y<<endl<<"Area: ";
//     return x*y;
//   }
//   void set(int a,int b){
//     this->x=a;
//     this->y=b;
//   }

// };
// int main(){
//     saini* s=new saini();
//     s->set(2,4);
//     cout<<s->access();
// }


//(2)---------------------------Inheritance-----------------------------------//

//------------------acess modifier result
//parent           child             result

//public           public           public
//public           private          private
//public           proteced         protected

//private          public           Not accessible
//private          private          Not accessible
//private          protected        Not accessible

//protected       public            Protected
//protected       private           private
//protected       protected         protected


//in inheritance we inherit the proerties of parent class into child class for reusability and used herarihchal relationship betyween classes
//there are 5 types of inheritance->> 


//(a)---Single inheritance--> one derived class inherit for only single parent class
// class parent{

// };
// class child: public parent{

// };


//(b)---multiple inheritance--> a child class is inherit for multiple parent class
// class A{

// };
// class B{

// };
// class C: public A,public B{

// };


//(c)---multilevel inheritance--> a derived class is inherit fro another derived class and formed a chain like structure
// class X{

// };
// class Y: public X{

// };
// class Z:public Y{

// };
// means now x and z and indirecty inherit to each other


//(d)---herirarical inheritance--> multiple derived class inherit from single parent class--
// class A{

// };
// class B: public A{

// };
// class C: public A{

// }

//(e)--hybrid inheritance--> combinantion of two or more inheritance 
// class A{

// };
// class B{

// };
// class c: public A,public B{

// };
// class D:public B{

// };


//Important   Multiple inheritance anomalies
// class A{
//     public:
//     void pera(){
//         cout<<"This is class A pera function"<<endl;
//     }
// };
// class B{
//     public:
//     void pera(){
//         cout<<"This is class B pera function"<<endl;
//     }
// };
// class C: public A,public B{

// };
// int main(){
//     // C * s=new C();
//     // // s->pera();//   here it will shows ambigous means we will access two functions  so we can resolve this using scope resolution oerator
//     // s->A::pera();
//     // s->B::pera();

//     // C c;
//     // c.A::pera();
//     // c.B::pera();

// }

// //-------------------diamond problem-----------------//
// class saini{
//     public:
//     void pera(){
//         cout<<"This is saini class function"<<endl;
//     }
// };
// class saini2:virtual public saini{

// };
// class saini3:virtual public saini{

// };
// class saini4:public saini2,public saini3{

// };
// int main(){
//     saini4 * s=new saini4();
//     s->pera();
// }




//(3)-->polimorphism-> it means many forms means at a same time a man can be brother,husband or more enties
//two typees
//(a)---compile time polimorphism//  function exection decided at compilation time
//(a.1)// function overloading--> same funtion name but diffrent arguments
// void pera(){
//     cout<<"Pera"<<endl;
// }
// int pera(int x,int y){
//     return x*y;
// }
// float pera(float x,float y){
//     return x*y;
// }
// int main(){
// pera();
// cout<<pera(2,3);
// cout<<pera(2.1f,3.2f);
// }



// (a.2)--  operator overloading we can change the behaveiour of any operator
// (b)Run time polimorphism-- function execultion decided at run time after compliation phase
//Function overriding-> same function name and same arugments but prerequesite thing is inheritance
// class saini{
//     public:
//     virtual void pera(){
//         cout<<"This is saini class function"<<endl;
//     }
// };
// class saini2:public saini{
//     public:
//     void pera() override{
//         cout<<"This is saini2 class"<<endl;
//     }
// };
// int main(){
//     saini * s=new saini();
//     s->pera();
//     s=new saini2();
//     s->pera();
// }


// (4)Abstraction-->>that is used for hoiding the data and provide the essential information to user with respect to role in which we use pure virtual function it means only delactrion not defined
// class Abstract{
//     public:
//     virtual void pera()=0;
//     // virtual int x;
// };
// class saini:public Abstract{
//     public:
//     void pera() override{
//         cout<<"This is class saini function"<<endl;
//     }
// };
// class saini2: public Abstract{
//     public:
//     void pera() override{
//         cout<<"this is class saini2 function"<<endl;
//     }
// };
// int main(){
//     Abstract * s=new saini();
//     s->pera();
//     s=new saini2();
//     s->pera();
// }

//----------------------------------------templates-------------------------------------->
//if we are writing same function name but diffrent behaviour then use templates
// template<typename T>
// T saini(T a,T b){
//     return a*b;
// }
// int main(){
//     cout<<saini(2,3)<<endl;
//     cout<<saini(2.1,3.3)<<endl;

// }

//exception handling-------------
int main(){
    try{
        int x,y;
        cin>>x>>y;
        if(y==0){
            throw "denominator should not be zero";
        }else{
            cout<<"A/b: "<<x/y;
        }
    }catch(const char* err){
        cout<<err;
    }
}