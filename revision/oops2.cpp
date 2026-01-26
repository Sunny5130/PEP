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
class saini{
    private:
    int l;
    int b;
    public:
    // saini(int x,int y){
    //     this->l=x;
    //     this->b=y;
    // }
    void setlb(int l,int b){
        this->l=l;
        this->b=b;
    }
    int area(){
        return l*b;
    }

};
int main(){
    // saini *s1=new saini(2,3);
    saini *s=new saini();
    s->setlb(3,5);
    cout<<s->area();
}

