
abstract class Car{
    void start(){
        System.out.println("Car is running");
    }
    abstract void acc();
    abstract void brake();
}
class fuelCar extends Car{
    //Writing @Override is optional
    @Override void acc(){
        System.out.println("Fuel car is running");
    }
    @Override void brake(){
        System.out.println("Fuel car is going to Stop");
    }
}
class oilCar extends Car{
   void acc(){
        System.out.println("Oil car is ready to running");
    }
    void brake(){
        System.out.println("Oilcar is ready to stop");
    }
}
public class Abstract{
    public static void main(String[] args){
        Car c=new fuelCar();
        c.start();
        c.acc();
        c.brake();

        c=new oilCar();
        c.start();
        c.acc();
        c.brake();
        }
}