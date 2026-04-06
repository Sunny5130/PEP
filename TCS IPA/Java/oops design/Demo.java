import java.util.*;
class Students{
    private int id;
    private String name;
    private int totalmarks;
    Students(int id,String name,int to){
        this.id=id;
        this.name=name;
        this.totalmarks=to;
    }
    //getter
    int getId(){return id;}
    String getName(){return name;}
    int totalMarks(){return totalmarks;}
    //setter
    void setId(int id){this.id=id;}
    void setName(String name){this.name=name;}
    void setTotalMarks(int marks){this.totalmarks=marks;}
}
public class Demo{
    static String maximarks(Students[] arr){
        String name="";
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(arr[i].totalMarks()>maxi){
                maxi=arr[i].totalMarks();
                name=arr[i].getName();
            }
        }
        if(name.equals("")){
            return "No person have salary";
        }
        return name.toUpperCase();
    }
    static int[] Seach70Percent(Students[] arr){
        ArrayList<Integer>ans=new ArrayList<>();
        for(int i=0;i<arr.length;i++){
            double per=(arr[i].totalMarks()/400.0)*100;
            if(per>70){
                ans.add(arr[i].getId());
            }
        }
        int[] res=new int[ans.size()];
        for(int i=0;i<ans.size();i++){
            res[i]=ans.get(i);
        }
        Arrays.sort(res);
        return res;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();sc.nextLine();
        
        Students[] arr=new Students[n];
        for(int i=0;i<n;i++){
            int id=sc.nextInt();sc.nextLine();
            String name=sc.nextLine();
            int totalMarks=sc.nextInt();sc.nextLine();
            arr[i]=new Students(id,name,totalMarks);
        }
        String maxiSalryPerson=maximarks(arr);
        System.out.println("The Student with maximum Marks is: "+maxiSalryPerson);
        int[] ans=Seach70Percent(arr);
        System.out.print("Student with more than 70 percent marks: ");
        for(int i=0;i<ans.length;i++){
            System.out.print(" "+ans[i]);
        }

        sc.close();
    }
}