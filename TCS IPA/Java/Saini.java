import java.util.*;
public class Saini{
   static void pera(){
        System.out.println("This is pera function");
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        pera();
        System.out.println("Value of x: "+x);
        sc.close();
    }
}