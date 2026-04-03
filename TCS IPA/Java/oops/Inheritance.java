// public class Inheritance {
//     public static void main(String[] args){
//         saini2 s=new saini2();
//         s.set("Saini",22);
//         s.pera();
//     }
// }
// class Saini{
//     public String name;
//     protected int age;
//     protected void set(String name,int age){
//         this.name=name;
//         this.age=age;
//     }
// }
// class saini2 extends Saini{
//     void pera(){
//         System.out.println("name: "+name+" age: "+age);
//     }
// }
// class saini3 extends saini2{
//     void perra(){
//         System.out.println("Name: "+name+" age: ");
//     }
// }




//Types of inheritance in java->single,multi level,herarical only three types
//         in java, java doesn't support multiple inheritance due to diaimond problem


//this is Single inheritance-> a child class is derived only from single parent or only parent class

// class Saini{
//     void pera(){
//         System.out.println("This is Saini class");
//     }
// }
// class Saini2 extends Saini{
//     void pera(){
//         System.out.println("This is Saini2 class pera function");
//     }
// }
// public class Inheritance{
//     public static void main(String[] args){
//         Saini s=new Saini();
//         s.pera();
        
//         s=new Saini2();
//         s.pera();
//     }
// }




//multi level inheritance-> a derived class is inherit from another derived class and forming a chain like structure that means multi lwevel inheritance 

// class Saini{
//     void pera(){
//         System.out.println("This is Saini class pera");
//     }
// }
// class Saini2 extends Saini{
//     void pera1(){
//         System.out.println("This is Saini2 class");
//     }
// }
// class Saini3 extends Saini2{
//     void pera2(){
//         System.out.println("This is Saini3 class pera function");
//     }
// }
// public class Inheritance{
//     public static void main(String[] args){
//         Saini s=new Saini();
//         s.pera();
//         s=new Saini2();
//         s.pera();
//         s=new Saini3();
//         s.pera();
//     }
// }



//herarichal inheritance
class Saini{
    void pera(){
        System.out.println("Pera of Saini class");
    }
}
class Saini2 extends Saini{

}
class Saini3 extends Saini{

}
public class Inheritance{
    public static void main(String[] args){

    }
}