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
class Course{
    private int id;
    private String name;
    private String admin;
    private int quiz;
    private int handson;
    Course(int a,String b,String c,int d,int e){
        this.id=a;
        this.name=b;
        this.admin=c;
        this.quiz=d;
        this.handson=e;
    }
    //getter
    int getId(){return id;}
    String getName(){return name;}
    String getAdmin(){return admin;}
    int getQuiz(){return quiz;}
    int getHandson(){return handson;}
    //setter
    void setId(int id){this.id=id;}
    void setName(String name){this.name=name;}
    void setAdmin(String admin){this.admin=admin;}
    void setQuiz(int quiz){this.quiz=quiz;}
    void setHandSon(int hanson){this.handson=hanson;}
}
public class Demo{
    public static int AvgOfQuiz(Course[] arr,String nam){
        int sum=0;
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i].getAdmin().equalsIgnoreCase(nam)){
                sum+=arr[i].getQuiz();
                count++;
            }
        }
        if(count==0){
            return 0;
        }else{
            return sum/count;
        }
    }
    // public static String[] checkhandison(Course[] arr,int cc){
    //     HashMap<String,Integer>mp=new HashMap<>();
    //     for(int i=0;i<arr.length;i++){
    //         if(arr[i].getHandson()<cc){
    //             mp.put(arr[i].getName(),mp.getOrDefault(arr[i].getName(),0)+1);
    //         }
    //     }
    //     List<Map.Entry<String,Integer>>list=new ArrayList<>(mp.entrySet());
    //     list.sort((a,b)->a.getValue()-b.getValue());
    //     String[] ans=new String[list.size()];
    //     int i=0;
    //     for(Map.Entry<String,Integer> entr:list){
    //         ans[i]=entr.getKey();
    //         i++;
    //     }
    //     return ans;
    // }
    
    public static Course[] checkhandison(Course[] arr,int cc){
    ArrayList<Course> list = new ArrayList<>();
    for(int i=0;i<arr.length;i++){
        if(arr[i].getHandson() < cc){
            list.add(arr[i]);
        }
    }
    if(list.size() == 0){
        return null;
    }
    list.sort((a,b) -> a.getHandson() - b.getHandson());
    Course[] res = new Course[list.size()];
    for(int i=0;i<list.size();i++){
        res[i] = list.get(i);
    }
    return res;
}
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Course[] arr=new Course[4];
        for(int i=0;i<4;i++){
            int id=sc.nextInt();sc.nextLine();
            String name=sc.nextLine();
            String admin=sc.nextLine();
            int quiz=sc.nextInt();sc.nextLine();
            int handson=sc.nextInt();sc.nextLine(); 
            arr[i]=new Course(id, name, admin,quiz, handson);
        }
        String cname=sc.nextLine();
        int chandson=sc.nextInt();sc.nextLine();

        int ans=AvgOfQuiz(arr, cname);
        if(ans==0){
            System.out.println("No Couse");
        }else{
            System.out.println("Avetage: "+ans);
        }
        // String[] res=checkhandison(arr, chandson);
        Course[] res=checkhandison(arr, chandson);
        if(res.length==0){
            System.out.println("No Course found with mentioned attribute.");
        }else{
            for(Course nums: res){
                System.out.println(nums.getName());
            }
        }
        sc.close();
    }
}