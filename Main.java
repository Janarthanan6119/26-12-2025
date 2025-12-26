import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int s = sc.nextInt();
        
        int count=0;
        for(int i=0;i<n;i++){
            String str = sc.next();
            for(int j=0;j<m;j++){
                if(str.charAt(j)=='o'){
                    count++;
                }
            }
        }
        System.out.println(s*count);
    }
}