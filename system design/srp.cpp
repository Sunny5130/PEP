#include<bits/stdc++.h>
using namespace std;
class product{
    public:
    string name;
    double price;
    product(string name,double rate){
        this->name=name;
        this->price=rate;
    }
};
class shopcart{
    public:
    vector<product*>products;
    void insertprod(product* p){
        products.push_back(p);
    }
    const vector<product*>& returnprod(){
        return products;
    }
};
class printcart{
    public:
    shopcart *cart;
    printcart(shopcart* cart){
        this->cart=cart;
    }
    void printproducts(){
        cout<<"Product invoice:"<<endl;
    for(auto num: cart->returnprod()){
        cout<<num->name<<" rate is: "<<num->price<<endl;
    }
}
    void totalrate(){
        double total=0;
    for(auto num: cart->returnprod()){
        total+=num->price;
    }
    cout<<"total price of all products in cart is: "<<total;
}
};
class savedbcart{
    public:
    shopcart *cart;
    savedbcart(shopcart* cart){
        this->cart=cart;
    }
    void savecarttodb(){
        cout<<"save to db...."<<endl;
    }
};
int main(){
    shopcart* cart=new shopcart();

    cart->insertprod(new product("shirt",999));
    cart->insertprod(new product("jeans",1999));
    cart->insertprod(new product("formal shoes",499));
    
    printcart* print=new printcart(cart);
    cout<<endl;
    print->printproducts();
    print->totalrate();
    
    savedbcart* save=new savedbcart(cart);
    cout<<endl;
    save->savecarttodb();
    cout<<endl;
    cart->insertprod(new product("formal shoes",499));
    print->printproducts();
    print->totalrate();
}