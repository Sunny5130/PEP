// //compile thime polimorphism
// class Saini{
//     void sum(){
//         System.out.println("Sum of 2+3 is 5");
//     }
//     int sum(int a,int b){
//         return a+b;
//     }
//     int sum(int a,int b,int c){
//         return a+b+c;
//     }
//     double sum(double a,double b){
//         return a+b;
//     }
// }
// public class Polimorphism {
//     static int mul(int a,int b){
//         return a*b;
//     }
//     static int mul(int a,int b,int c){
//         return a*b*c;
//     }
//     public static void main(String[] args){
//         // Saini s=new Saini();
//         // System.out.println(s.sum(2,3));
//         // s.sum();
//         // System.out.println(s.sum(1,2,3));
//         // System.out.println(s.sum(2.0d,3.0d));
//         System.out.println(mul(2,3));
//         System.out.println(mul(2,3,4));
//     }
// }

//runtime polimorphism deside at run time but if methods are sttic so methos can't to overhiddden
// class Saini{
//     void pera(){
//         System.out.println("This is Saini Class function");
//     }
// }
// class Saini2 extends Saini{
//     @Override void pera(){
//         System.out.println("this is Saini2");
//     }
// }
// class Saini3 extends Saini{
//     void pera(){
//         System.out.println("This is Saini3 class method");
//     }
// }
// class Polimorphism{
//     public static void main(String[] args){
//         Saini s=new Saini();
//         s.pera();
//         s=new Saini2();
//         s.pera();
//         s=new Saini3();
//         s.pera();
//     }
// }



// class Saini{
//     static void pera(){
//         System.out.println("This is Saini Class function");
//     }
// }
// class Saini2 extends Saini{
//     static void pera(){
//         System.out.println("this is Saini2");
//     }
// }
// class Saini3 extends Saini{
//     static void pera(){
//         System.out.println("This is Saini3 class method");
//     }
// }
// class Polimorphism{
//     public static void main(String[] args){
//         Saini s=new Saini();
//         s.pera();
//         s=new Saini2();
//         s.pera();
//         s=new Saini3();
//         s.pera();
//     }
// }