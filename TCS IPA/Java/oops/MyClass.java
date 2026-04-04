import java.util.*;

public class MyClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Laptop[] arr = new Laptop[4];

        for(int i=0;i<4;i++){
            int id = sc.nextInt(); sc.nextLine();
            String br = sc.nextLine();
            String os = sc.nextLine();
            double pr = sc.nextDouble(); sc.nextLine();
            int rat = sc.nextInt(); sc.nextLine();

            arr[i] = new Laptop(id, br, os, pr, rat);
        }

        String brand = sc.nextLine();
        String osType = sc.nextLine();

        int res1 = countOfLaptopsByBrand(arr, brand);
        if(res1 > 0) System.out.println(res1);
        else System.out.println("The given brand is not available");

        Laptop[] res2 = searchLaptopByOsType(arr, osType);
        if(res2 != null){
            for(Laptop l : res2){
                System.out.println(l.getId() + " " + l.getRating());
            }
        } else {
            System.out.println("The given os is not available");
        }
    }

    // method 1
    public static int countOfLaptopsByBrand(Laptop[] arr, String n){
        int count = 0;
        for(int i=0;i<arr.length;i++){
            if(arr[i].getBrand().equalsIgnoreCase(n) && arr[i].getRating() > 3){
                count++;
            }
        }
        return count;
    }

    // method 2
    public static Laptop[] searchLaptopByOsType(Laptop[] arr, String os){
        ArrayList<Laptop> list = new ArrayList<>();

        for(Laptop l : arr){
            if(l.getOsType().equalsIgnoreCase(os)){
                list.add(l);
            }
        }

        if(list.size() == 0) return null;

        list.sort((a,b) -> b.getId() - a.getId());

        return list.toArray(new Laptop[0]);
    }
}

// class
class Laptop {
    private int laptopId;
    private String brand;
    private String osType;
    private double price;
    private int rating;

    Laptop(int id, String brand, String os, double price, int rating){
        this.laptopId = id;
        this.brand = brand;
        this.osType = os;
        this.price = price;
        this.rating = rating;
    }

    public int getId(){ return laptopId; }
    public String getBrand(){ return brand; }
    public String getOsType(){ return osType; }
    public double getPrice(){ return price; }
    public int getRating(){ return rating; }
}