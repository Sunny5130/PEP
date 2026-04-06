import java.util.*;
public class MapPract{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();sc.nextLine();
        String[] arr=new String[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextLine();
        }
        HashMap<String,Integer>mp=new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(arr[i],mp.getOrDefault(arr[i],0 )+1);          
        }
        List<Map.Entry<String,Integer>>list=new ArrayList<>(mp.entrySet());
        
        list.sort((a, b) -> a.getValue() - b.getValue());
        for(Map.Entry<String,Integer> entry: list){
            System.out.println(entry.getKey()+" -> "+entry.getValue());
        }
        
        sc.close();
    }
}
