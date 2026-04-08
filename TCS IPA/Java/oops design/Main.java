import java.util.*;
// ---------------------------------------------(1)----------
//Stydent having more than 70 percnet marks and have maxi  amrks student name

// class Students{
//     private int id;
//     private String name;
//     private int totalmarks;
//     Students(int id,String name,int to){
//         this.id=id;
//         this.name=name;
//         this.totalmarks=to;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     int totalMarks(){return totalmarks;}
//     //setter
//     void setId(int id){this.id=id;}
//     void setName(String name){this.name=name;}
//     void setTotalMarks(int marks){this.totalmarks=marks;}
// }
// public class Demo{
//     static String maximarks(Students[] arr){
//         String name="";
//         int maxi=Integer.MIN_VALUE;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].totalMarks()>maxi){
//                 maxi=arr[i].totalMarks();
//                 name=arr[i].getName();
//             }
//         }
//         if(name.equals("")){
//             return "No person have salary";
//         }
//         return name.toUpperCase();
//     }
//     static int[] Seach70Percent(Students[] arr){
//         ArrayList<Integer>ans=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             double per=(arr[i].totalMarks()/400.0)*100;
//             if(per>70){
//                 ans.add(arr[i].getId());
//             }
//         }
//         int[] res=new int[ans.size()];
//         for(int i=0;i<ans.size();i++){
//             res[i]=ans.get(i);
//         }
//         Arrays.sort(res);
//         return res;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();sc.nextLine();
        
//         Students[] arr=new Students[n];
//         for(int i=0;i<n;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             int totalMarks=sc.nextInt();sc.nextLine();
//             arr[i]=new Students(id,name,totalMarks);
//         }
//         String maxiSalryPerson=maximarks(arr);
//         System.out.println("The Student with maximum Marks is: "+maxiSalryPerson);
//         int[] ans=Seach70Percent(arr);
//         System.out.print("Student with more than 70 percent marks: ");
//         for(int i=0;i<ans.length;i++){
//             System.out.print(" "+ans[i]);
//         }

//         sc.close();
//     }
// }



//-------------------------------------------------------(2)--------------------------------------//
//-------------------------------------medicine---------------------------------------------------//
// class Medicine{
//     private int id;
//     private String name;
//     private String type;
//     private double price;
//     Medicine(int id,String name,String type,double price){
//         this.id=id;
//         this.name=name;
//         this.type=type;
//         this.price=price;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     String getType(){return type;}
//     double getPrice(){return price;}
//     //setter
//     void setId(int id){this.id=id;}
//     void setName(String name){this.name=name;}
//     void setType(String type){this.type=type;}
//     void setPrice(double price){this.price=price;}
// }
// public class Demo{
//     //count medicine by medicine name
//     static int countMedicine(Medicine[] arr,String mediname){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getName().equalsIgnoreCase(mediname)){
//                 count++;
//             }
//         }
//         if(count==0){
//             return 0;
//         }
//         return count;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Medicine[] arr=new Medicine[4];
//         for(int i=0;i<4;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             String type=sc.nextLine();
//             double price=sc.nextDouble();sc.nextLine();
//             arr[i]=new Medicine(id, name, type, price);
//         }
//         System.out.print("Which medicine you want to find: ");
//         String medi=sc.nextLine();
//         int count=countMedicine(arr, medi);
//         if(count==0){
//             System.out.println("No medicine with such name");
//         }else{
//             System.out.println(medi+" name medicine count is: "+count);
//         }
//         sc.close();
//     }
// }



//----------------------------------------(3)-----------------------------------------------------
// ead `n` product objects (id, name, price, category). Read a category string `C`. Print the average price of matching products rounded to 2 decimal places. Print `0.00` if none match.

// class Product{
//     private int id;
//     private String name;
//     private double price;
//     private String category;
//     Product(int a,String b,double c,String d){
//         this.id=a;
//         this.name=b;
//         this.price=c;
//         this.category=d;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     double getPrice(){return price;}
//     String getCategory(){return category;}
//     //setter
//     void setId(int id){this.id=id;}
//     void setName(String name){this.name=name;}
//     void setPrice(double price){this.price=price;}
//     void setCategory(String cat){this.category=cat;}
// }
// public class Demo{
//     static double calculateAvgPrice(Product[] arr,String cat){
//         int count=0;
//         double total=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getCategory().equalsIgnoreCase(cat)){
//                 total+=arr[i].getPrice();
//                 count++;
//             }
//         }
//         if(count==0){
//             return 0;
//         }else{
//             return total/count;
//         }

//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();sc.nextLine();
//         Product[] arr=new Product[n];
//         for(int i=0;i<n;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             double price=sc.nextDouble();sc.nextLine();
//             String category=sc.nextLine();
//             arr[i]=new Product(id,name,price,category);
//         }
//         String checkCategory=sc.nextLine();
//         double ans=calculateAvgPrice(arr,checkCategory);
//         if(ans==0){
//             System.out.println("NO product with such category");
//         }else{
//         System.out.printf(" %.2f ",ans);
//         }
//         sc.close();
//     }
// }



//-----------------------------------------(4)--------------------------------
// create the class Course with the below Attributes.

// courseId- int
// courseName- String
// courseAdmin- String
// quiz- int
// handson -int

// The above methods should be private ,write getter and
// setter and parametrized constructor as required.

// create class courseProgram with main method.

// implement two static methods-
//    findAvgOfQuizByAdmin method:this method will take array
// of Course objects and a String  value as input parameters.
// This method will find out Average (as int) of Quiz questions
// for given Course Admin (String parametre passed)
// This method will return Average if found.if there is no course
// that matches then the method should return 0.

// sortCourseByHandsOn method:
// This method will take an Array of Course Objects and int
// value as input parameters.
// This methods should return an Array of Course objects in an
// ascending order of their  handson which are less than the
// given handson(int parameter passed) value. if there is no
// such course then the method should return null.

// The above mentioned static methods should be called from
// main methods.

// for findAvgOfQuizByAdmin method: The main method
// should print the average if the returned value is not 0.
// if the returned value is 0 then it should print "No Course
// found."


// for sortCourseByHandsOn method:
//                         the  main method should print the name
// of the Course from the returned Course object Array if the
// returned value is not null.if the returned value is null then
// it should print "No Course found with mentioned attribute."

// input1:
// 111
// kubernetes
// Nisha
// 40
// 10
// 321
// cassandra
// Roshini
// 30
// 15
// 457
// Apache Spark
// Nisha
// 30
// 12
// 987
// site core
// Tirth
// 50
// 20
// Nisha
// 17

// output1:
// 35
// kubernetes
// Apache Spark
// cassandra

// input2:
// 111
// kubernetes
// Nisha
// 40
// 10
// 321
// cassandra
// Roshini
// 30
// 15
// 457
// Apache Spark
// Nisha
// 30
// 12
// 987
// site core
// Tirth
// 50
// 20
// Shubhamk
// 5

// output 2:
// No Course found
// No Course found with mentioned attributes.

// class Course{
//     private int id;
//     private String name;
//     private String admin;
//     private int quiz;
//     private int handson;
//     Course(int a,String b,String c,int d,int e){
//         this.id=a;
//         this.name=b;
//         this.admin=c;
//         this.quiz=d;
//         this.handson=e;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     String getAdmin(){return admin;}
//     int getQuiz(){return quiz;}
//     int getHandson(){return handson;}
//     //setter
//     void setId(int id){this.id=id;}
//     void setName(String name){this.name=name;}
//     void setAdmin(String admin){this.admin=admin;}
//     void setQuiz(int quiz){this.quiz=quiz;}
//     void setHandSon(int hanson){this.handson=hanson;}
// }
// public class Demo{
//     public static int AvgOfQuiz(Course[] arr,String nam){
//         int sum=0;
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getAdmin().equalsIgnoreCase(nam)){
//                 sum+=arr[i].getQuiz();
//                 count++;
//             }
//         }
//         if(count==0){
//             return 0;
//         }else{
//             return sum/count;
//         }
//     }
//     // public static String[] checkhandison(Course[] arr,int cc){
//     //     HashMap<String,Integer>mp=new HashMap<>();
//     //     for(int i=0;i<arr.length;i++){
//     //         if(arr[i].getHandson()<cc){
//     //             mp.put(arr[i].getName(),mp.getOrDefault(arr[i].getName(),0)+1);
//     //         }
//     //     }
//     //     List<Map.Entry<String,Integer>>list=new ArrayList<>(mp.entrySet());
//     //     list.sort((a,b)->a.getValue()-b.getValue());
//     //     String[] ans=new String[list.size()];
//     //     int i=0;
//     //     for(Map.Entry<String,Integer> entr:list){
//     //         ans[i]=entr.getKey();
//     //         i++;
//     //     }
//     //     return ans;
//     // }
    
//     public static Course[] checkhandison(Course[] arr,int cc){
//     ArrayList<Course> list = new ArrayList<>();
//     for(int i=0;i<arr.length;i++){
//         if(arr[i].getHandson()<cc){
//             list.add(arr[i]);
//         }
//     }
//     if(list.size() == 0){
//         return null;
//     }
//     list.sort((a,b) -> a.getHandson() - b.getHandson());
//     Course[] res = new Course[list.size()];
//     for(int i=0;i<list.size();i++){
//         res[i] = list.get(i);
//     }
//     return res;
// }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Course[] arr=new Course[4];
//         for(int i=0;i<4;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             String admin=sc.nextLine();
//             int quiz=sc.nextInt();sc.nextLine();
//             int handson=sc.nextInt();sc.nextLine(); 
//             arr[i]=new Course(id, name, admin,quiz, handson);
//         }
//         String cname=sc.nextLine();
//         int chandson=sc.nextInt();sc.nextLine();

//         int ans=AvgOfQuiz(arr, cname);
//         if(ans==0){
//             System.out.println("No Couse");
//         }else{
//             System.out.println("Average: "+ans);
//         }
//         // String[] res=checkhandison(arr, chandson);
//         Course[] res=checkhandison(arr, chandson);
//         if(res.length==0){
//             System.out.println("No Course found with mentioned attribute.");
//         }else{
//             for(Course nums: res){
//                 System.out.println(nums.getName());
//             }
//         }
//         sc.close();
//     }
// }




//--------------------------------(5)----------------------------------
// create a class Footwear which consists of the below attributes.
//   footwearId=int
//   footwearName=String
//   footwearType=String
//   price =int

// the above attributes should be private.
// write getter and setter and parametrised constructor as required.

// create the class footwearProgrammm with the main method.
// implement the 2 static methods.getCountByType and
// getSecondHighestPriceByBrand in the Solution class.


// getCountByType method:
//    this method will take two input parameters.
// array of the Footwear objects and string parameter footwear type.
// this method will return the count of the footwears from array of the
// footwear objects for the given type of footwear.
// if no footwear with the given footwear type is found in the
// array of footwear abjects,then the method should return 0.



// getSecondHighestPriceByBrand method:
//   this method will take 2 input parameters-array of footwear objects and string parameter inputFootwearName.the method
// will return the second highest footwear objects based on the price from the array of the Footwear objects


// whose brand name matches with the input string parameter.


// if no footwear with the given brand is present in the array of the footwear objects,the the method
// should return null.

// NOTE: no two footwear objects would have the same footwearId.All the searches should be case insensitive.
// the above mentioned static methods should be called from the main method.

// for getCountByType method- the main method should print the count of the footwears ,if the returned value
// is greater than zero. or it should print "Footwear not available";

// for getSecondHighestPriceByBrand method-The main method should print price from the returned footwear objects


// if the returned footwear object is not null.else it should print "Brand not available".
// for example.
// 112
// ABC
// 25555
//   where 112 is the footwear id,ABC is brand name,25555 is price.

// consider the sample input and output.

// 100
// Sketchers
// sneekers
// 12345
// 103
// Puma
// running shoes
// 10099
// 102
// reebok
// Running shoes
// 5667
// 101
// Reebok
// running shoes
// 5656
// 99
// reebok
// floaters
// 5666
// Running shoes
// reebok

// Sample output:
// 3
// 99
// reebok
// 5666

// Sample input2:

// 100
// Puma
// sneekers
// 12345
// 101
// Puma
// sneekers
// 10099
// 102
// Puma
// sneekers
// 5000
// 102
// Reebok
// sneekers
// 8000
// 104
// Puma
// floaters
// 2000
// running shoes
// bata

// Sample output:
// Footwear not available
// Brand not available
// Brand not available


// class Footwear{
//     private int id;
//     private String name;
//     private String type;
//     private int price;
//     Footwear(int a,String b,String c,int d){
//         this.id=a;
//         this.name=b;
//         this.type=c;
//         this.price=d;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     String getType(){return type;}
//     int getPrice(){return price;}
//     //setter
//     void setId(int id){this.id=id;}
//     void setName(String name){this.name=name;}
//     void setType(String type){this.type=type;}
//     void setPrice(int price){this.price=price;}
// }
// public class Demo {
//     public static int footWearType(Footwear[] arr,String nn){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getType().equalsIgnoreCase(nn)){
//                 count++;
//             }
//         }
//         return count;
//     }
//     public static Footwear[] secondHighFootwear(Footwear[] arr,String nn){
//         ArrayList<Footwear>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getName().equalsIgnoreCase(nn)){
//                 list.add(arr[i]);
//             }
//         }
//         if(list.size()<2){
//             return null;
//         }
//         list.sort((a,b)->a.getPrice()-b.getPrice());

//         Footwear[] ans=new Footwear[1];
//         ans[0]=list.get(list.size()-2);
//         return ans;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Footwear[] arr=new Footwear[5];
//         for(int i=0;i<5;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             String type=sc.nextLine();
//             int price=sc.nextInt();sc.nextLine();
//             arr[i]=new Footwear(id,name,type,price);
//         }
//         String ss=sc.nextLine();
//         String pp=sc.nextLine();

//         int total=footWearType(arr, ss);
//         Footwear[] res=secondHighFootwear(arr, pp);

//         if(total==0){
//             System.out.println("Footwear Not Available");
//         }else{
//             System.out.println(total);
//         }

//         if(res==null){
//             System.out.println("NO Brand available");
//         }else{
//             System.out.println(res[0].getId());
//             System.out.println(res[0].getName());
//             System.out.println(res[0].getPrice());
//         }
//         sc.close();
//     }
// }








//--------------------------------------------(6)-------------------------------
// Create a class called Student with the below attributes:

// rollNo - int
// name - String
// branch - String
// score - double
// dayScholar - boolean

// The above attributes should be private, write getters, setters and parameterized constructor as required.

// Create class Solution with main method.
// Implement two static methods -findCountOfDayscholarStudents  and findStudentwithSecondHighestScore in Solution 
// class.

// findCountOfDayscholarStudents:
// This method will take an array of Student objects as an input parameter . This method will calculate and return 
// the count of Students whose score is greater than 80 and who are all from dayScholar.

// If no Student scored greater than 80 and from dayScholar are present in the array of Student objects, then the
// method should return 0.

// findStudentwithSecondHighestScore:

// This method will take an array of Student objects as an input parameter. This method will return the object 
// of the second highest score student from the array of Student objects who are not from the dayScholar.

// If no Student is a dayScholar  in the array of Student objects, then the method should return null.

// Note : All the searches should be case insensitive.

// The combination of dayScholar and score for each student is always unique.

// The above mentioned static methods should be called from the main method.

// For findCountOfDayscholarStudents method - The main method should print the returned count as it is 
// if the returned value is greater than 0, else it should print "There are no such dayscholar students".

// For findStudentwithSecondHighestScore method - The main method should print the rollNo, name and score 
// in the below format from the returned object if the retuned value is not null.

// rollNo#name#score

// If the returned value is null, then it should print ”There are no student from non day scholar”

// Before calling these static methods in main, use Scanner object to read the values of four Student 
// objects referring attributes in the above mentioned attribute sequence. 
// Consider below sample input and output:

// Input:

// 1001
// Ashwa
// IT
// 85
// true
// 1002
// Preeti
// IT
// 70
// false
// 1003
// Uma
// ECE
// 85
// false
// 1004
// Akash
// EEE
// 90
// true


// Output:
// 2
// 1002#Preeti#70.0






//-------------------------------------(7)-------------------------------


// Create a class called Student with the below attributes:

// rollNo - int
// name - String
// branch - String
// score - double
// dayScholar - boolean

// The above attributes should be private, write getters, setters and parameterized constructor as required.

// Create class Solution with main method.
// Implement two static methods -findCountOfDayscholarStudents  and findStudentwithSecondHighestScore in Solution 
// class.

// findCountOfDayscholarStudents:

// This method will take an array of Student objects as an input parameter . This method will calculate and return 
// the count of Students whose score is greater than 80 and who are all from dayScholar.

// If no Student scored greater than 80 and from dayScholar are present in the array of Student objects, then the
// method should return 0.

// findStudentwithSecondHighestScore:

// This method will take an array of Student objects as an input parameter. This method will return the object 
// of the second highest score student from the array of Student objects who are not from the dayScholar.

// If no Student is a dayScholar  in the array of Student objects, then the method should return null.

// Note : All the searches should be case insensitive.

// The combination of dayScholar and score for each student is always unique.

// The above mentioned static methods should be called from the main method.

// For findCountOfDayscholarStudents method - The main method should print the returned count as it is 
// if the returned value is greater than 0, else it should print "There are no such dayscholar students".

// For findStudentwithSecondHighestScore method - The main method should print the rollNo, name and score 
// in the below format from the returned object if the retuned value is not null.

// rollNo#name#score

// If the returned value is null, then it should print ”There are no student from non day scholar”

// Before calling these static methods in main, use Scanner object to read the values of four Student 
// objects referring attributes in the above mentioned attribute sequence. 
// Consider below sample input and output:

// Input:

// 1001
// Ashwa
// IT
// 85
// true
// 1002
// Preeti
// IT
// 70
// false
// 1003
// Uma
// ECE
// 85
// false
// 1004
// Akash
// EEE
// 90
// true


// Output:
// 2
// 1002#Preeti#70.0
// import java.util.*;
// class Student{
//     private int roll;
//     private String name;
//     private String branch;
//     private double score;
//     private boolean dayS;
//     Student(int a,String b,String c,double d,boolean e){
//         this.roll=a;
//         this.name=b;
//         this.branch=c;
//         this.score=d;
//         this.dayS=e;
//     }
//     //getter
//     int getRoll(){return roll;}
//     String getName(){return name;}
//     String getBranch(){return branch;}
//     double getScore(){return score;}
//     boolean getDayS(){return dayS;}
//     //setter
//     void setRoll(int a){this.roll=a;}
//     void setName(String b){this.name=b;}
//     void setBranch(String c){this.branch=c;}
//     void setScore(double d){this.score=d;}
//     void setDayS(boolean e){this.dayS=e;}
    
// }
// public class Main{
// public static int countda(Student[] arr){
//     int count=0;
//     for(int i=0;i<arr.length;i++){
//         if(arr[i].getDayS()==true && arr[i].getScore()>80){
//             count++;
//         }
//     }
//     return count;
// }
// public static Student sec(Student[] arr){
//     ArrayList<Student>list=new ArrayList<>();
//     for(int i=0;i<arr.length;i++){
//         if(arr[i].getDayS()==false){
//         list.add(arr[i]);
//         }
//     }
//     if(list.size()<2)return null;
//     list.sort((a,b)->Double.compare(b.getScore(),a.getScore()));//for double 
//     // Student[] ans=new Student[1];
//     // ans[0]=list.get(list.size()-2);
//     // return ans;
//     return list.get(1);
// }
// public static void main(String[] args){
//     Scanner sc=new Scanner(System.in);
//     Student[] arr=new Student[4];
//     for(int i=0;i<4;i++){
//         int roll=sc.nextInt();sc.nextLine();
//         String name=sc.nextLine();
//         String branch=sc.nextLine();
//         double score=sc.nextDouble();sc.nextLine();
//         boolean dayS=sc.nextBoolean();sc.nextLine();
//         arr[i]=new Student(roll,name,branch,score,dayS);
//     }
//     int ans=countda(arr);
//     System.out.println("Count of day Scolear: "+ans);
//     Student res=sec(arr);
//     // System.out.println(res[0].getRoll()+"#"+res[0].getName()+"#"+res[0].getScore());
//     System.out.println(res.getRoll()+"#"+res.getName()+"#"+res.getScore());
//     sc.close();
//     }
// }






//--------------------------IPA(8)--------------------
// Create a class Hotel with the below attributes:
 
// hotelId - int
// hotelName - String
// dateOfBooking – String (in the format dd-mon-yyyy)
// noOfRoomsBooked – int
// wifiFacility – String
// totalBill- double



// The above attributes should be private, write getters, setters and parameterized constructor as required.
// Create class Solution with main method.
// Implement two static methods – noOfRoomsBookedInGivenMonth and searchHotelByWifiOption in Solution class.
 
// noOfRoomsBookedInGivenMonth method:
// This method will take two input parameter - array of Hotel objects and a String parameter.
// The method will return the total numbers of rooms booked from array of Hotel objects for the given month(String parameter passed).
// If no rooms are booked for the given month in the array of Hotel objects, then the method should return 0.

// searchHotelByWifiOption method:
// This method will take two input parameter - array of Hotel objects and a String parameter
// The method will return Hotel object with second highest totalbill, from the array of Hotel objects where wifiFacility attribute 
// matches with the given wifi facility(String parameter passed).
// If no Hotel with the given wifi option is present in the array of Hotel objects, then the method should return null.
 
// Note : 
// No two Hotel object would have the same hotelId.
// No two Hotel object would have the same totalbill.
// The Array either has at least two objects with specified wifi option OR  no object with specified wifi option. 
// All the searches should be case insensitive. 
// dateOfBooking is stored in the format dd-mon-yyyy(eg. 01-Jan-2022)
 
// The above mentioned static methods should be called from the main method. 
// For noOfRoomsBookedInGivenMonth method - The main method should print the total number of booked rooms as it is, 
// if the returned value is greater than 0, else it should print "No rooms booked in the given month" 
// For searchHotelByWifiOption method - The main method should print the hotelId from the returned Hotel object if the returned value is not null. 
// If the returned value is null then it should print "No such option available".
// Before calling these static methods in main, use Scanner object to read the values of four Hotel objects referring attributes in the above mentioned attribute sequence. 
// Next, read the value of two String parameters for capturing the month and wifi option 
// Consider below sample input and output:


// Input1:
// 101
// Best Stay
// 01-jan-2022
// 10
// Yes
// 20000
// 102
// Apple Stay
// 12-Feb-2022
// 3
// Yes
// 4000
// 103
// Accord
// 11-May-2022
// 5
// Yes
// 15000
// 104
// Royal Park
// 22-Dec-2021
// 7
// Yes
// 12000
// May
// Yes
 
// Output1:
// 5
// 103



// Input2:
// 101
// Best Stay
// 01-jan-2022
// 10
// Yes
// 20000
// 102
// Apple Stay
// 12-Feb-2022
// 3
// Yes
// 4000
// 103
// Accord
// 11-May-2022
// 5
// Yes
// 15000
// 104
// Royal Park
// 22-Dec-2021
// 7
// Yes
// 12000
// May1
// Yes1

// Output2:
// No rooms booked in the given month
// No such option available

// class Hotel{
//     private int id;
//     private String name;
//     private String date;
//     private int norooms;
//     private String wifi;
//     private double total;
//     Hotel(int a,String b,String c,int d,String e,double f){
//         this.id=a;
//         this.name=b;
//         this.date=c;
//         this.norooms=d;
//         this.wifi=e;
//         this.total=f;
//     }
//     //getter
//     int getId(){return id;}
//     String getName(){return name;}
//     String getDate(){return date;}
//     int getNoRooms(){return norooms;}
//     String getWifi(){return wifi;}
//     double getTotal(){return total;}    
// }
// public class Main{
//     public static int nobookmont(Hotel[] arr,String ss){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             String[] ans=arr[i].getDate().split("-");
//             if(ans[1].equalsIgnoreCase(ss)){
//                 count+=arr[i].getNoRooms();
//             }
//         }
//         return count;
//     }
//     // public static Hotel[] hotelroom(Hotel[] arr,String ss){
//     //     ArrayList<Hotel>list=new ArrayList<>();
//     //     for(int i=0;i<arr.length;i++){
//     //         if(arr[i].getWifi().equalsIgnoreCase(ss)){
//     //             list.add(arr[i]);
//     //         }
//     //     }
//     //     if(list.size()<2)return null;
//     //     list.sort((a,b)->Double.compare(b.getTotal(),a.getTotal()));
//     //     Hotel[] ans=new Hotel[1];
//     //     ans[0]=list.get(1);
//     //     return ans;
//     // }
//     public static Hotel hotelroom(Hotel[] arr,String ss){
//         ArrayList<Hotel>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getWifi().equalsIgnoreCase(ss)){
//                 list.add(arr[i]);
//             }
//         }
//         if(list.size()<2)return null;
//         list.sort((a,b)->Double.compare(b.getTotal(),a.getTotal()));
//         return list.get(1);
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Hotel[] arr=new Hotel[4];
//         for(int i=0;i<4;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             String date=sc.nextLine();
//             int nor=sc.nextInt();sc.nextLine();
//             String wifi=sc.nextLine();
//             double total=sc.nextDouble();sc.nextLine();
//             arr[i]=new Hotel(id,name,date,nor,wifi,total);
//         }
//         String a=sc.nextLine();
//         String b=sc.nextLine();

//         int totoal=nobookmont(arr, a);
//         if(totoal==0){
//             System.out.println("No rooms booked in the given month");
//         }else{
//             System.out.println(totoal);
//         }

        
//         // Hotel[] ans=hotelroom(arr, b);
//         // if(ans==null){
//         //     System.out.println("No such option available");
//         // }else{
//         //     System.out.println(ans[0].getId());
//         // }

//         Hotel ans=hotelroom(arr, b);
//         if(ans==null){
//             System.out.println("No such option available");
//         }else{
//             System.out.println(ans.getId());
//         }

//         sc.close();
//     }
// }


//-----------------------------------(9)---------------------------------