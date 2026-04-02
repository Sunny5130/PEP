
// https://github.com/Arijit-SE/Java-Solutions-TCS-IPA-Questions/blob/main/Count_Word_Vowel.java


// import java.util.*;
// public class arr {
//     public static void main(String[] args){
//         Scanner sc=new Scanner (System.in);

// //-----Static array----Sized is fixed--------------
//         // int n=sc.nextInt();
//         // int[] arr=new int[n];
//         // for(int i=0;i<n;i++){
//         //     arr[i]=sc.nextInt();
//         // }
//         // // Arrays.sort(arr);
//         // System.out.println("Elements of an array is: ");
//         // for(int i=0;i<n;i++){
//         //     System.out.print(arr[i]+" ");
//         // }


// // Dynamic array----------------------Size is not fixed we can grow------------//

//         // Arraylist in java or dynmic in nature
//         // int n=sc.nextInt();
//         // ArrayList<Integer> nums=new ArrayList<>(n);
//         //     for(int i=0;i<n;i++){
//         //         nums.add(sc.nextInt());
//         //     }
//         //     Collections.sort(nums);
//         //     for(int i=0;i<n;i++){
//         //         System.out.println("nums["+i+"]: "+ nums.get(i));
//         //     }


// //----------------Second largest element
//     //     int n=sc.nextInt();
//     //     int[] nums=new int[n];
//     //     for(int i=0;i<n;i++){
//     //         nums[i]=sc.nextInt();
//     //     }
//     //     int fmaxi=Integer.MIN_VALUE;
//     //     int smaxi=Integer.MIN_VALUE;

//     //     for(int i=0;i<n;i++){
//     //         fmaxi=Integer.max(fmaxi,nums[i]);
//     //     }

//     //     for(int i=0;i<n;i++){
//     //         if(nums[i]!=fmaxi){
//     //         smaxi=Integer.max(smaxi,nums[i]);
//     //     }
//     // }
//     //    System.out.println("Second maxi element of an array: "+smaxi);


// //----------------------Reverse a String
//     // String s=sc.nextLine();
//     //     String str="";
//     //     for(int i=s.length()-1;i>=0;i--){
//     //         str+=s.charAt(i);
//     //     }
//     //     System.out.println("String is: "+str);
//         sc.close();
//     }
// }


//---------------integer is palindrome or not--------
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int orig=n;
//         int ans=0;
//         while(n!=0){
//             int d=n%10;
//             ans=d+(ans*10);
//             n=n/10;
//         }
//         if(ans==orig){
//             System.out.println(orig+ " is palindrome no");
//         }else{
//             System.out.println(orig +" is not palindrome number");
//         }
//         sc.close();
//     }
// }



//---------------String is palindrome or not------------------//
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();

        //using fro loop

        // String ans="";
        // for(int i=s.length()-1;i>=0;i--){
        //     ans+=s.charAt(i);
        // }
        // System.out.println(s+" reversed as: "+ ans);

        // if(s.equals(ans)){
        //     System.out.println("Palindrome");
        // }else{
        //     System.out.println("Not palindrome");
        // }

        //using two pointer approach
//         int count=0;
//         int i=0,j=s.length()-1;
//         while(i<j){
//             if(s.charAt(i) != s.charAt(j)){
//                 System.out.println("Not palindrome");
//                 count++;
//                 break;
//             }
//             i++;
//             j--;
//         }
//         if(count==0){
//         System.out.print(s+" is palindrome");
//         }
//         sc.close();
//     }
// }


// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n;
//         n=sc.nextInt();
//         int[] arr=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }
//         Arrays.sort(arr);
//         ArrayList<Integer>list=new ArrayList<>();
//         list.add(arr[0]);
//         for(int i=1;i<n;i++){
//             if(arr[i]==arr[i-1]){
//                 continue;
//             }else{
//                 list.add(arr[i]);
//             }
//         }
//         System.out.print("Array after remove duplicates is: ");
//         for(int i=0;i<list.size();i++){
//             System.out.print(" "+list.get(i));
//         }
//         sc.close();
//     }
// }


//-----------missing number-----------------//
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int[] arr=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }
//         int tsum=((n+1)*(n+2))/2;
//         System.out.println("Missing no is: "+ (tsum-sum));        
//     }
// }



//-------sum of ligit until don't achive-------//
// import java.util.*;
// public class arr{

//     static int sum(int n){
//     int s=0;
//         while(n!=0){
//             s+=n%10;
//             n=n/10;
//         }
//         return s;
// }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);

//         int n=sc.nextInt();
//         while(n>10){
//             n=sum(n);
//             System.out.println(" Sum of digit is: "+ n);
//         }
//         sc.close();
//     }
// }






//-----------matrix submission or multiplication---------
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int r=sc.nextInt();
//         int c=sc.nextInt();
//         int[][] mat1=new int[r][c];
//         int[][] mat2=new int[r][c];

//         //add 
//         int [][] add=new int[r][c];
//         //multiply
//         int[][] mul=new int[r][c];

//         System.out.println("Input for first matrix");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 mat1[i][j]=sc.nextInt();
//             }
//         }
//         System.out.println("input for second matrix");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 mat2[i][j]=sc.nextInt();
//             }
//         }

//         //add
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 add[i][j]=mat1[i][j]+mat2[i][j];
//             }
//         }
//         System.out.println("Addition of matrix is: ");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 System.out.print(" "+add[i][j]);
//             }
//             System.out.println();
//         }
//         //multiply
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 mul[i][j]=mat1[i][j] * mat2[i][j];
//             }
//         }
//         System.out.println("Multiplication of matrix is: ");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 System.out.print(" "+mul[i][j]);
//             }
//             System.out.println();
//         }

    // }
// }



//--------------------anagram or not string----

// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String a=sc.nextLine();
//         String b=sc.nextLine();

//         char[] s1=a.toCharArray();
//         char[] s2=b.toCharArray();
        
//         Arrays.sort(s1);
//         Arrays.sort(s2);

//         String x=new String(s1);
//         String y=new String(s2);

//         if(x.equals(y)){
//             System.out.println(a+" and "+b+" are anagram");
//         }else{
//             System.out.println("Not anagram to each other");
//         }
//         sc.close();
//     }
// }



//--fabonnachi number--
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int x=0,y=1;
//         System.out.print("Fabbo series: "+x+" "+y+" ");
//         for(int i=3;i<=n;i++){
//             int z=x+y;
//             System.out.print(z+" ");
//             x=y;
//             y=z;
//         }
//         sc.close();

//     }
// }


//------------------Vowels andconsonents--
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String vowel="";
//         String conso="";
//         for(int i=0;i<s.length();i++){
//             if(s.charAt(i)=='a' ||s.charAt(i)=='e' ||s.charAt(i)=='i' ||s.charAt(i)=='o' ||s.charAt(i)=='u' ||
//         s.charAt(i)=='A' ||s.charAt(i)=='E' ||s.charAt(i)=='I' ||s.charAt(i)=='O' ||s.charAt(i)=='U'){
//             vowel+=s.charAt(i);
//         }else if(s.charAt(i)==' '){
//             continue;
//         }
//         else{
//             conso+=s.charAt(i);
//         }
//         }
//         System.out.println("Vowels: "+ vowel+" length: "+vowel.length());
//         System.out.println("Consonents: "+conso+" length: "+conso.length());
//         sc.close();
//     }
// }


//---------------Calculator
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();sc.nextLine();
//         int b=sc.nextInt();sc.nextLine();
//         char c=sc.nextLine().charAt(0);
//         if(c=='+'){
//             System.out.println("Sum of "+a+" and "+b+" is: "+ (a+b));
//         }else if( c=='-'){
//             System.out.println("Substarcation of "+a+" and "+b+" is: "+ (a-b));
//         }else if( c=='*'){
//             System.out.println("Multiplication of "+a+" and "+b+" is: "+ (a*b));
//         }else if( c=='/'){
//             System.out.println("Division of "+a+" and "+b+" is: "+ (a/b));
//         }else if( c=='%'){
//             System.out.println("module or reaminder of "+a+" and "+b+" is: "+ (a%b));
//         }else{
//             System.out.println("Invalid operator");
//         }
//         sc.close();
//     }
// }


//----------------------Armstrong number--
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int x=sc.nextInt();
//         int y=String.valueOf(x).length();
//         int orig=x;
//         int ans=0;
//         while(x!=0){
//             int d=x%10;
//             ans+=(int)Math.pow(d, y);
//             x=x/10;
//         }
//         if(orig==ans){
//             System.out.println(ans+" is Armstrong no");
//         }else{
//             System.out.println(ans+ " No armstrogng");
//         }
//         sc.close();

//     }
// }



//-----------------------Repet character
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         char[] nums=s.toCharArray();
//         Arrays.sort(nums);
//         String ans="";
//         int count=1;
//         for(int i=1;i<nums.length;i++){
//             if(nums[i-1]==nums[i]){
//                 count++;
//             }else{
//                 if(count>1){
//                     System.out.println(nums[i-1]+" ->  "+count);
//                 }
//                 count=1;
//             }
//         }
//             if(count>1){
//                 System.out.print(nums[nums.length-1]+" -> "+count);
//             }

        
//         sc.close();
//     }
// }


// import java.util.*;
// public class arr{
    // static boolean counts(String s){
    //     int count=0;
    //     for(int i=1;i<s.length();i++){
    //         if((s.charAt(i)=='a'|| s.charAt(i)=='e'|| s.charAt(i)=='i'|| s.charAt(i)=='o'|| s.charAt(i)=='u') &&
    //     (s.charAt(i-1)=='a'|| s.charAt(i-1)=='e'|| s.charAt(i-1)=='i'|| s.charAt(i-1)=='o'|| s.charAt(i-1)=='u')){
    //             count++;
    //         }
    //     }
    //     if(count>=1){
    //         return true;
    //     }
    //     return false;
    // }

    // static boolean isprime(int n){
    //     boolean flag=true;
    //     if(n<2)return false;
    //     for(int i=2;i*i<=n;i++){
    //         if(n%i==0){
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag)return true;
    //     else return false;
    // }
    // public static void main(String[] args){
    //     Scanner sc=new Scanner(System.in);



/*Count the number of words in a sentence that contain at least two consecutive vowels (a, e, i, o, u) in them.
Here's a sample input and output:
Input: I enjoy eating spaghetti and meatballs for dinner
Output: 2
Explanation: There are two words in the sentence that contain at least two consecutive vowels - "enjoy" and "meatballs"
 */
        // String s=sc.nextLine();
        // int count=0;
        // String ans="";
        // for(int i=0;i<s.length();i++){
        //     if(s.charAt(i)==' '){
        //         if(counts(ans)){
        //             count++;
        //         }
        //         ans="";
        //     }else{
        //         ans+=s.charAt(i);
        //     }
        // }
        // System.out.println(count);





/* Find the characters in odd position of a string which are consonent
 * 
 * Input: Arijit Ghosh
 * Output: hs
 */




/* Count number of prime digit in a Number 
 * Input : 254786135
 * Output : 5
*/
    // int n=sc.nextInt();
    // int count=0;
    // int orig =n;
    // while(n!=0){
    //     int d=n%10;
    //     if(isprime(d)){
    //         count++;
    //     }
    //     n=n/10;
    // }
    // System.out.println(count+ " digits are prime digit in "+ orig);




/* Find number of lower case in a string
 * AriJIt = 3
 */
        // String s=sc.nextLine();
        // int count=0;
        // for(int i=0;i<s.length();i++){
        //     if(Character.isLowerCase(s.charAt(i))){
        //         count++;
        //     }
        // }
        // System.out.println("Lowecase characters are: "+ count);



/* Find number of upper case in a string
 * AriJIt = 3
 */

        // String s=sc.nextLine();
        // int count=0;
        // for(int i=0;i<s.length();i++){
        //     if(Character.isUpperCase(s.charAt(i))){
        //         count++;
        //     }
        // }
        // System.out.println("Uppercase characters are: "+ count);





/* Count number of word in a string
*Note : Always ignore the spaces if more than 1 space given between two word
Sample Input : 1
------------------------
Kalyani Goverment Engineering College
Process
---------------------------
[Kalyani, Goverment, Engineering, College]
Output
---------------------------
Number of word : 4
*************************************
Sample Input : 2
------------------------
Kalyani Goverment  Engineering College
Process
---------------------------
[Kalyani, Goverment, , Engineering, College]
Output
---------------------------
Number of word : 4
*/


/* Count the words in a sentence which are start with vowel.    Did
 * 
 * Input: Arijit is student of MCA
 * Output: 3
 * 
 * Input: Sara plays tennis
 * Output: No such words
*/


/* Input : Home, Sweet Home
           Home
 * Output : Number of that word present in the sentence : 2
 * 
 * Process
 * ----------
 * The word Home present in the sentence 2 times
 */
    




/*Given a sentence, Find words that start with a capital letter.

For example, in the sentence "The quick Brown Fox jumps over the lazy dog", there are three words that start with a 
capital letter: "The", "Brown", and "Fox". */

// import java.util.*;
// public class Find_UpperCase {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         String[] s = sc.nextLine().split(" ");
//         System.out.println("The words starts with capital letter: ");
//         for (int i = 0; i < s.length; i++) {
//             if(s[i].charAt(0)>='A' && s[i].charAt(0)<='Z')
//             {
//                 System.out.println(s[i]);
//             }
//         }
//     }




//reverse an integer
// import java.util.*;
// public class java{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         // int ans=0;
//         // while(n!=0){
//         //     int d=n%10;
//         //     ans=d+(ans*10);
//         //     n=n/10;
//         // }
//         // System.out.println("Reverse of number: "+ans);

//         //or
//         String s=Integer.toString(n);
//         String ans="";
//         for(int i=s.length()-1;i>=0;i--){
//             ans+=s.charAt(i);
//         }
//         int rev=Integer.parseInt(ans);
//         System.out.println(rev);
//         sc.close();
//     }
// }


//count vowels and consonents
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String str=s.toLowerCase();
//         int vow=0,con=0;
//         for(int i=0;i<str.length();i++){
//             if(Character.isAlphabetic(str.charAt(i))){
//                 if(str.charAt(i)=='a' || str.charAt(i)=='e' ||str.charAt(i)=='i' ||str.charAt(i)=='o' ||str.charAt(i)=='u'){
//                     vow+=1;
//                 }else{
//                     con+=1;
//                 }
//             }
//         }
//         System.out.println("vowels: "+vow);
//         System.out.println("Consonents: "+con);
//         sc.close();
//     }
// }





//Print consonents in lowercase as equence


// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String str=s.toLowerCase();
//         String con="";
//         for(int i=0;i<str.length();i++){
//             if(Character.isAlphabetic(str.charAt(i))){
//                 if(str.charAt(i)=='a' || str.charAt(i)=='e' ||str.charAt(i)=='i' ||str.charAt(i)=='o' ||str.charAt(i)=='u'){
//                 }else{
//                     con+=str.charAt(i);
//                 }
//             }
//         }
//         System.out.println("Consonents in lowercase: " +con);

//         sc.close();
//     }
// }


// print smallest vowle no as ascii value
// import java.util.*;
// public class arr{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String ans="";
//         for(int i=0;i<s.length();i++){
//             if(s.charAt(i)=='a'|| s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'){
//                 ans+=s.charAt(i);
//             }
//         }
//         char[] arr=ans.toCharArray();
//         Arrays.sort(arr);
//         System.out.println("smallest vowel: "+arr[0]);
//         System.out.println("Asscii value: "+(int)arr[0]);
//         sc.close();
//     }
// }






//Count Uppercase and lowercase in string

import java.util.*;
public class arr{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int low=0,upe=0;
        for(int i=0;i<s.length();i++){
            // if(Character.isAlphabetic(s.charAt(i))){
            //     if(Character.isLowerCase(s.charAt(i))){
            //         low++;
            //     }else{
            //         upe++;
            //     }
            // }
            char c=s.charAt(i);
            if(c>='a' && c<='z'){
                low++;
            }else if(c>='A' && c<='Z'){
                upe++;
            }
        }
        System.out.println("Uppercase letter are: "+upe);
        System.out.println("Lowercase letter are: "+low);
        sc.close();
    }
}