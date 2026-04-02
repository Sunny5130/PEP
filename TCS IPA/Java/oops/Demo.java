public class Demo{
    public static void main(String[] args){
        // Student s1=new Student();
        // s1.name="Sunny";
        // s1.age=22;
        // s1.roll=69;
        // s1.marks=8.03;
        // s1.markatt();
        // s1.print();

        Student s=new Student("Saini",21,23,8.01);
        s.markatt();
        s.print();

        s.setname("Rohit");
        s.markatt();
        s.print();
    }
}
class Student{
    String name;
    int age;
    int roll;
    Double marks;
    Student(String n,int a,int r,Double m){
        this.name=n;
        this.age=22;
        this.roll=r;
        this.marks=m;
    }

    void setname(String name){
        this.name=name;
    }
    void markatt(){
        System.out.println(name+ " has marked the attendence");
    }
    void print(){
        System.out.println(name+", "+age+", "+roll+", "+marks);
    }
}