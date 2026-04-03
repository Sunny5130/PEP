//Encapsulation means binding the data memebr and member function inside a class
class Encapsulation{
    private String name;
    private int age;
    private int length,bredth;
    public void setall(String n,int a,int l,int b){
        this.name=n;
        this.age=a;
        this.length=l;
        this.bredth=b;
    }
    public int getarea(){
        return length*bredth;
    }
}

public class Encap{
    public static void main(String[] args){
        Encapsulation e=new Encapsulation();
        e.setall("Sunny",22, 2,3);
        System.out.println("Area: l*b:  "+e.getarea());
    }
}

