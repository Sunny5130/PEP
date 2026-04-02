
//------------------Vowels andconsonents--
import java.util.*;
public class arr{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String vowel="";
        String conso="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a' ||s.charAt(i)=='e' ||s.charAt(i)=='i' ||s.charAt(i)=='o' ||s.charAt(i)=='u' ||
        s.charAt(i)=='A' ||s.charAt(i)=='E' ||s.charAt(i)=='I' ||s.charAt(i)=='O' ||s.charAt(i)=='U'){
            vowel+=s.charAt(i);
        }else if(s.charAt(i)==' '){
            continue;
        }
        else{
            conso+=s.charAt(i);
        }
        }
        System.out.println("Vowels: "+ vowel+" length: "+vowel.length());
        System.out.println("Consonents: "+conso+" length: "+conso.length());
        sc.close();
    }
}