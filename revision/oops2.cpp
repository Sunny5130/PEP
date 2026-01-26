#include<bits/stdc++.h>
using namespace std;
// class saini{
//     private:
//     int health;
//     public:
//     void sethealth(int h){
//         this->health=h;
//     }
//     int gethealth(){
//         return health;
//     }

// };
// int main(){
//     saini s;
//     saini *s1=new saini();   
//     s.sethealth(5);
//     cout<<s.gethealth()<<endl;

//     s1->sethealth(3);
//     cout<<s1->gethealth();


// }


// class saini{
//     private:
//     // char b;
//     // int a;
//     // double c;
//     // string a="sss";
// };
// class saini2{
//     public:
//     int x=2;
// };
// int main(){
//     saini s;

//     cout<<sizeof(s);
// }


// class saini{
//     private:
//     int length,bredth;
//     public:
//     //default constructor
//     saini(){
//         cout<<"I am constructor"<<endl;
//     }
//     ~saini(){
//         cout<<endl<<"I am destructor"<<endl;
//     }
//     //parameterige constructor
//     saini(int l,int b){
//         this->length=l;
//         this->bredth=b;
//     }
//     int getarea(){
//         return length*bredth;
//     }

// };
// int main(){
//     //static alooction object
//     // saini s;
//     //dynamic allocation objects
//     saini *s1=new saini(2,3);
//     // unique_ptr<saini> s1 = make_unique<saini>();//this is smart pointer it will delete memory itself after the scope of main end
//     // cout<<s1->getarea();
//     //delete dynamic object before scoping end
//     saini *s2=new saini(*s1);
//     cout<<s2->getarea();
//     delete s1;
// }


//------------------------------Deep copy and Shallow copy-----------------------------//
// class saini{
//     public:
//     int *data;
//     saini(int v){
//         data=new int(v);
//     }
//     saini(const saini&obj){
//         data=new int(*obj.data);
//     }
//     ~saini(){
//         cout<<"Delete memory"<<endl;
//         delete data;
//     }
// };
// int main(){
//     saini s(2);
//     saini s1(s);
//     *s1.data=23;
//     cout<<*s.data<<endl;
//     cout<<*s1.data<<endl;
// }



//----------------------------friend function----------------------------------//
// class Test {
// private:
//     int x;

// public:
//     Test(int v) {
//         x = v;
//     }

//     friend void show(Test t);
// };

// void show(Test t) {
//     cout << t.x;   // accessing private member
// }

// int main() {
//     Test t1(10);
//     show(t1);
// }

//---------------------------Encapsulation-------------------------------//
// class saini{
//     private:
//     int l;
//     int b;
//     public:
//     // saini(int x,int y){
//     //     this->l=x;
//     //     this->b=y;
//     // }
//     void setlb(int l,int b){
//         this->l=l;
//         this->b=b;
//     }
//     int area(){
//         return l*b;
//     }

// };
// int main(){
//     // saini *s1=new saini(2,3);
//     saini *s=new saini();
//     s->setlb(3,5);
//     cout<<s->area();
// }

//--------------------------Inheritance------------------------------//
// inheritance means inherite the parent class properties to child class----//

//result
//  parent class               child class       result

//   public                    public            public
//   public                    private           private
//   public                    protected         protected
//   private                   public            Not accessible
//   private                   private           NA
//   private                   protected         Na
//   protected                 public            protected
//   protected                 private           private
//   protected                 protected         protected


//--------------------single inheritnace--------------------------------//
// class saini{
//     private:
//     int x;
//     protected:
//     int y;
//     public:
//     int z;
//     void setvalues(int x,int y,int z){
//         this->x=x;
//         this->y=y;
//         this->z=z;
//     }
//     void get(){
//         cout<<x<<endl<<y<<endl<<z;
//     }
// };
// class saini2:public saini{
//     public:
//     void get2(){
//         // cout<<x<<endl;
//         cout<<y<<endl;
//         cout<<z<<endl;
//     }
// };
// int main(){
//     saini2 *s=new saini2();
//     s->setvalues(1,2,3);
//     s->get2();
//     s->get();
// }

//----------------------multiple inheritance-------------------------------//
// class saini{
//     public:
//     void pera(){
//         cout<<"Saini";
//     }
// };
// class saini2{
//     public:
//     void pera(){
//         cout<<"Saini2";
//     }
// };
// class saini3:public saini,public saini2{
        
// };
// int main(){
//     saini3 *s=new saini3();
//     s->saini::pera();
//     cout<<endl;
//     s->saini2::pera();

// }

//-------------------------------multi level------------------------------------//

// class saini{
//     public:
//     void pera(){
//         cout<<"Saini";
//     }
// };
// class saini2:public saini{

// };
// class saini3:public saini2{

// };
// int main(){
//     saini3 *s=new saini3();
//     s->pera();
// }

//--------------herirachiel------------------------------//
// class saini{

// };
// class saini2:public saini{

// };
// class saini3:public saini{

// };
// int main(){
//     saini3 *s=new saini3();
//     saini3 s;
// }

//-------------hybrid inheritance--------------------------//
// combination of two or inheritance---------

// ----------------------------------------Diamond problem------------------------------------------
// class saini{
//     public:
//     void pera(){
//         cout<<"I am saini";
//     }
// };
// class saini2: virtual public saini{
            
// };
// class saini3: virtual public saini{

// };
// class saini4:public saini2,public saini3{

// };
// int main(){
//     saini4 *s=new saini4();
//     s->pera();
// }


//--------------------------Abstraction----------------------------//
// class abstract{
//     public:
//     virtual void pera()=0;
// };
// class child:public abstract{
//     public:
//     void pera()override{
//         cout<<"I am abstract class function";
//     }
// };
// class child2:public abstract{
//     public:
//     void pera()override{
//         cout<<"I am child2";
//     }
// };
// int main(){
//     abstract *a=new child();
//     a=new child2();
//     a->pera();
// }


//-----------------------------polymorphism-----------------------------//

// ----------compile time polimorphism-------------------------//
// (1)---function overloading----------------------------------//
// void saini(){
//     cout<<"Hello i am saini"<<endl;
// }
// void saini(int x,int y){
//     cout<<"value of x and y:"<<x<<" , "<<y<<endl;
// }
// int saini(int x){
//     return x;
// }
// float saini(float x){
//     return x;
// }
// int main(){
//     saini();
//     saini(2,3);
//     cout<<saini(23)<<endl;
//     cout<<saini(23.24f)<<endl;
// }

//(2)-----------------------operator overloading------------------//
class saini {
public:
    int x;
    saini(int x){
        this->x=x;
    }
    saini operator -(const saini& obj) {
        return saini(x * obj.x);
    }
};
int main() {
    saini a(5);
    saini b(10);
    saini c = a-b;   // operator + is called
    cout<<c.x;       // output -> 15
}

//---------------------function overriding---------------//
//-------------- --------------------runtime polimorphism-----------------//
// class saini{
//     public:
//     virtual void pera(){
//         cout<<"I am saini class"<<endl;
//     }
//    virtual ~saini(){
//         cout<<"destructor of saini"<<endl;
//     }
// };
// class saini2:public saini{
//     public:
//     void pera() override{
//         cout<<"I am class saini2"<<endl;
//     }
//     ~saini2(){
//         cout<<"destructor of saini2"<<endl;
//     }
// };
// int main(){
//     saini *s=new saini();
//     s->pera();
//     delete s;
//     s=new saini2();
//     s->pera();
//     delete s;
// }
