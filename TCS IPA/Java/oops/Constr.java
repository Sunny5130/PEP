// public class Constr {
//     public static void main(String[] args){
//         // Saini s=new Saini("Sunny",22);
//         Saini s=new Saini();

//         System.out.println("name: "+s.getname());
//         System.out.println("Age: "+s.age);

//         s.setname("Saini sahab");
        
//         System.out.println("name: "+s.getname());
//         System.out.println("Age: "+s.age);
//     }
// }
// class Saini{
//     private String name;
//     int age;

//     Saini(){

//     }
//     Saini(String name,int age){
//         this.name=name;
//         this.age=age;
//     }

//     //Setter
//     void setname(String name){
//         this.name=name;
//     }
//     //getter
//     String getname(){
//         return name;
//     }
// }


class Constr{
    public static void main(String[] args){
        Random r=new Random(2,3);

        System.out.println("x: "+ r.x +", y: "+r.y);
        // set(r.x,r.y);
        set2(r);
        System.out.println("x: "+ r.x +", y: "+r.y);
    }
    //call by reference
    // Random r means we share the same refernce of the class or heap memory
    static void set2(Random r){
        r.x+=2;
        r.y+=2;
    }

    //call by value
    static void set(int x,int y){
        x=x+2;
        y=y+2;
    }
}
class Random{
        int x;
        int y;
        Random(int x,int y){
            this.x=x;
            this.y=y;
        }
}