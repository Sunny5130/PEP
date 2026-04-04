interface A{
    default void pera(){
        System.out.println(" A");
}
}
interface B extends A{
    default void pera(){
        System.out.println("B");
    }
}
interface C extends A{
    default void pera(){
        System.out.println("C");
    }
}
class D implements B,C{
    public void pera(){
        C.super.pera();
    }
}
public class Diamond{
    public static void main(String[] args){
        D d=new D();
        d.pera();

    }
}