// package Pract;
import java.util.*;
public class Main{
    static boolean ispalindrome(String s){
        String ans="";
        for(int i=s.length()-1;i>=0;i--){
            ans+=s.charAt(i);
        }
        if(ans.equals(s))return true;
        return false;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        //--------------------------Day(22)-------------------------------
        //palindrome check word
        // String s=sc.nextLine();
        // int count=0;
        // String[] nums=s.split(" ");
        // for(int i=0;i<nums.length;i++){
        //     if(ispalindrome(nums[i])){
        //         count++;
        //     }
        // }
        // System.out.println(count);

        // longest valid palindrome substring
        // String s=sc.nextLine();
        // String maxi="";
        // for(int i=0;i<s.length();i++){
        //     String ans="";
        //     for(int j=i;j<s.length();j++){
        //         ans+=s.charAt(j);
        //         if(ispalindrome(ans)){
        //             if(maxi.length()<ans.length()){
        //                 maxi=ans;
        //             }
        //         }
        //     }
        // }
        // System.out.println(maxi);


        //format of decimal digit
        // double num=sc.nextDouble();
        // System.out.format("%.2f%n",num);
        // System.out.printf("%.2f",num);

        // float f=sc.nextFloat();
        // System.out.printf("%.2f",f);
        


        //perfect number is a number whose sumof divisor digit equals to it
        // int n=sc.nextInt();
        // int count=0;
        // for(int i=1;i<n;i++){
        //     if(n%i==0)count+=i;
        // }
        // if(count==n){
        //     System.out.println("Perfect no");
        // }else{
        //     System.out.println("Not perfect number");
        // }
        


        // // Example:
        // //     Input:
        // //     hello world
        // //     l

        // //     Output:
        // //     heo word
        // String s=sc.nextLine();
        // char ch=sc.next().charAt(0);
        // String ans="";
        // for(int i=0;i<s.length();i++){
        //     if(s.charAt(i)==ch){
        //             continue;
        //     }else{
        //         ans+=s.charAt(i);
        //     }
        // }
        // System.out.println(ans);



        // String s=sc.nextLine();
        // String ans="";
        // HashSet<Character>se=new HashSet<>();
        // for(int i=0;i<s.length();i++){
        //     if(!se.contains(s.charAt(i))){
        //         ans+=s.charAt(i);
        //     }
        //     se.add(s.charAt(i));
        // }
        // System.out.println(ans);





        // remove dupliactes from string first appearce as 


        // using hashset
        // String s=sc.nextLine();
        // // String ans="";
        // StringBuilder ans=new StringBuilder();
        // HashSet<Character>set=new HashSet<>();
        // for(int i=0;i<s.length();i++){
        //     if(!set.contains(s.charAt(i))){
        //         // ans+=s.charAt(i);
        //         ans.append(s.charAt(i));
        //     }
        //     set.add(s.charAt(i));
        // }
        // System.out.println(ans);

        
        // // usinghashmap
        // String s=sc.nextLine();
        // // String ans="";
        // StringBuilder ans=new StringBuilder();
        // // Map<Character,Integer>ma=new HashMap<>();
        // Map<Character,Integer>ma=new TreeMap<>();
        // for(int i=0;i<s.length();i++){
        //     if(!ma.containsKey(s.charAt(i))){
        //         // ans+=s.charAt(i);
        //         ans.append(s.charAt(i));
        //     }
        //     ma.put(s.charAt(i),ma.getOrDefault(s.charAt(i),0)+1);
        // }
        // System.out.println(ans);

        // ma.forEach((key,value)->{
        //     System.out.println(key+": "+value);
        // });

        // String s=sc.nextLine();
        // StringBuilder ans=new StringBuilder();
        // String[] arr=s.split("");
        // for(int i=1;i<arr.length;i+=2){
        //     int n=Integer.parseInt(arr[i]);
        //     while(n!=0){
        //         ans.append(arr[i-1]);
        //         n--;
        //     }
        // }
        // System.out.println(ans);


        // // until don't 
        // int n=sc.nextInt();
        // while(n>=10){
        //    n=tosum(n);
        // }
        // System.out.println(n);

        


        // String s=sc.nextLine();
        // int so=0,c=0;
        // for(int i=0;i<s.length();i++){
        //     if(Character.isWhitespace(s.charAt(i)))so++;
        //     else c++;
        // }
        // System.out.println("space: "+so);
        // System.out.println("character: "+c);




       



        /*
 * Question Statement:

    Write a Java program that reads a string containing alphanumeric characters and calculates the sum of all numbers found in the string. The program should identify contiguous digit sequences as whole numbers and add them to the sum.

    Detailed Requirements:
    - The input will be a single line string that may contain letters, digits, and special characters.
    - The program should extract all the numeric sequences (consecutive digits) within the string and calculate their sum.
    - If there are no numeric sequences in the string, the sum should be 0.
    - The program should handle multi-digit numbers correctly (e.g., "abc123de45" should result in 123 + 45 = 168).

    Example Inputs and Outputs:
    - Input 1: "abc123xyz456"
    - Output 1: 579 (Explanation: 123 + 456)
    - Input 2: "a1b2c3"
    - Output 2: 6 (Explanation: 1 + 2 + 3)
    - Input 3: "hello"
    - Output 3: 0 (Explanation: No numbers found)
    - Input 4: "42isTheAnswer"
    - Output 4: 42

    Constraints:
    - The input string can have a length of up to 1000 characters.
    - The numbers in the string will not be negative.

    Code Explanation:
    The provided findSumOfNums method scans the input string character by character, checking if each character is a digit. When a digit is found, it extracts the entire contiguous numeric sequence and adds its value to the cumulative sum. Non-digit characters are skipped.

 */




    





    

/*
  (1)  Write a Java program that reads a string from the user and counts the occurrence of each character in the string (excluding spaces). 
    - Input: A single line string containing letters, numbers, or symbols.
    - Output: Each character (except spaces) followed by its occurrence count in the string.
    For example:
    - Input: "Hello World"
    - Output:  
    H 1  
    e 1  
    l 3  
    o 2  
    W 1  
    r 1  
    d 1  
 */
        // String s=sc.nextLine();
        // // HashMap<Character,Integer>ma=new LinkedHashMap<>();  //for order as gven input
        // // HashMap<Character,Integer>ma=new HashMap<>();        // in random order     
        // Map<Character,Integer>ma=new TreeMap<>();               //in sorted order
        // for(int i=0;i<s.length();i++){
        //     if(s.charAt(i)==' ')continue;
        //     ma.put(s.charAt(i),ma.getOrDefault(s.charAt(i),0)+1);
        // }
        // ma.forEach((key,value)->{
        //     System.out.println(key+" "+value);
        // });



    // (4)//lowest and maxi freq element

        // frerquency of elements
        // int n=sc.nextInt();
        // int[] arr=new int[n];
        // for(int i=0;i<n;i++){
        //     arr[i]=sc.nextInt();
        // }
        // HashMap<Integer,Integer>ma=new HashMap<>();
        // for(int i=0;i<n;i++){
        //     ma.put(arr[i],ma.getOrDefault(arr[i],0)+1);
        // }

        // for(Map.Entry<Integer,Integer>entry:ma.entrySet()){
        //     int vlaue=entry.getValue();
        //     int key=entry.getKey();
        //     System.out.println(key+": "+vlaue);
        // }

        // int maxi=Integer.MIN_VALUE;
        // int mini=Integer.MAX_VALUE;
        // int c1=0,c2=0;
        // for(Map.Entry<Integer,Integer>entr:ma.entrySet()){
        //     int value=entr.getValue();
        //     int key=entr.getKey();
        //     if(value>maxi){
        //         maxi=value;
        //         c1=key;
        //     }
        //     if(value<mini){
        //         mini=value;
        //         c2=key;
        //     }
        // }
        // System.out.println("Maxi frequency elment and value is: "+c1+" , "+maxi);
        // System.out.println("Mini frequency elment and value is: "+c2+" , "+mini);
        


        

        // (3)  //first non repeating character

        //second highest frequency element

        sc.close();
    }
    // static int tosum(int n){
    //     int sum=0;
    //     while(n!=0){
    //         sum+=n%10;
    //         n=n/10;
    //     }
    //     return sum;
    // }
}