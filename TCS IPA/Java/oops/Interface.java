interface Car{
    void start();
    void breaks();
    void acc();
}
class fuelCar  implements Car{
    //DOn;t need to write Override by deafult it is
    @Override public void start(){
        System.out.println("Start fuelcar");
    }
    @Override public void breaks(){
        System.out.println("Break fuelcar");
    }
    @Override public void acc(){
        System.out.println("Accelerate fuelcar");
    }
}
class oilCar implements Car{
    public void start(){
        System.out.println("Start Oilcar");
    }
    public void breaks(){
        System.out.println("Break Oilcar");
    }
    public void acc(){
        System.out.println("Accelerate Oilcar");
    }
}

public class Interface{
    public static void main(String[] args){
        Car c=new fuelCar();
        c.start();
        c.acc();
        c.breaks();
        c=new oilCar();
        c.start();
        c.acc();
        c.breaks();
            
    }
}