public class Static{
    public static void main(String[] args){
        System.out.println("Access before creating object the age is: "+ Saini.age);

        Saini s=new Saini("Saini");
        System.out.println("name: "+s.name+" Age: "+ Saini.age);

        Saini s2=new Saini("Mohit");
        System.out.println("name: "+s2.name+" Age: "+ Saini.age);
        Saini.show();
    }
}
class Saini{
    String name;
    static int age;
    Saini(String name){
        this.name=name;
    }
    static void show(){
        System.out.println("I am Saini clas static function");
        System.out.println("Age: "+age);
        // System.out.println("Name: "+name);//static datat metods cannot access noon static data memebers
        //cannot use this keyword or super
        //no runtime polimorphisam means cannot be ovverriden
    }
    static{
        age=21;
    }

}