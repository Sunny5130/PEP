import java.util.*;
public class Prime{
    // public static void main(String[] args){
    //     Scanner sc=new Scanner(System.in);
    //         int n=sc.nextInt();

    //         boolean flag=true;
    //         int orig=n;
    //         for(int i=2;i*i<=n;i++){
    //             if(n%i==0){
    //                 flag=false;
    //             }
    //         }
    //         if(n<2){
    //             System.out.println(n + " is not prime");
    //             return;
    //         }
    //         if(flag){
    //             System.out.println(n+" is prime");
    //         }else{
    //             System.out.println(n+" is not prime");
    //         }
    // }

    static boolean prime(int n){
        boolean flag=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
        if(flag)return true;
        else return false;
    }
    public static void main(String[] arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            if(prime(i)){
                System.out.print(i+",");
            }
        }
    }
}