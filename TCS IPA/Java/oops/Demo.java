// public class Demo{
//     public static void main(String[] args){
//         // Student s1=new Student();
//         // s1.name="Sunny";
//         // s1.age=22;
//         // s1.roll=69;
//         // s1.marks=8.03;
//         // s1.markatt();
//         // s1.print();

//         Student s=new Student("Saini",21,23,8.01);
//         s.markatt();
//         s.print();

//         s.setname("Rohit");
//         s.markatt();
//         s.print();
//     }
// }
// class Student{
//     String name;
//     int age;
//     int roll;
//     Double marks;
//     Student(String n,int a,int r,Double m){
//         this.name=n;
//         this.age=22;
//         this.roll=r;
//         this.marks=m;
//     }

//     void setname(String name){
//         this.name=name;
//     }
//     void markatt(){
//         System.out.println(name+ " has marked the attendence");
//     }
//     void print(){
//         System.out.println(name+", "+age+", "+roll+", "+marks);
//     }
// }



//This is practice of Encapsulation
// class Saini{
//     private int length;
//     private int bredth;
//     Saini(int a,int b){
//         this.length=a;
//         this.bredth=b;
//     }
//     //setter
//     void setlb(int l,int b){
//         this.length=l;
//         this.bredth=b;
//     }
//     //getter
//     int area(){
//         return length*bredth;
//     }
// }
// public class Demo{
//     public static void main(String[] args){
//         Saini s=new Saini(2,3);
//         System.out.println("Area: "+s.area());
//         s.setlb(4,5);
//         System.out.println("Area: "+s.area());
//     }
// }


//Inheritance practice
// class Saini{
//     static void pera(){
//         System.out.println("This is Saini pera");
//     }
// }
// class Saini2 extends Saini{
//     static void pera(){
//         System.out.println("This is pera function of class Saini2");
//     }
// }
// public class Demo{
//     public static void main(String[] args){
//         Saini s=new Saini();
//         s.pera();     //i can access as Saini.pera()  or Saini2.pera();
//         s=new Saini2();
//         s.pera();
//     }
// }



//Abstraction code Practice
// abstract class Abstract{
//     abstract void pera();
//     abstract void pera2();
// }
// class Saini extends Abstract{
//     void pera(){
//         System.out.println("This is Sainii pera function");
//     }
//     void pera2(){
//         System.out.println("This is Saini class pera2 function");
//     }
// }
// class Saini2 extends Abstract{
//     void pera(){
//         System.out.println("Saini2 pera function");
//     }
//     void pera2(){
//         System.out.println("This is pera2 saini2");
//     }
// }
// public class Demo{
//     public static void main(String[] args){
//         Abstract a=new Saini();
//         a.pera();
//         a.pera2();
//         a=new Saini2();
//         a.pera();
//         a.pera2();
//     }
// }




//Interface code practice
interface Saini{
    void pera();
}
public class Demo{
    public static void main(String[] args){

    }
}