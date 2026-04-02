import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] nums=new int[n];
        for (int i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        HashMap<Integer,Integer> map =new HashMap<>();
        for (int i=0;i<nums.length;i++){
            int num =nums[i];
            map.put(num,map.getOrDefault(num,0)+1);
        }
        for (int key:map.keySet()){
            System.out.println(key + " -> "+map.get(key));
        }
        sc.close();
    }
}

