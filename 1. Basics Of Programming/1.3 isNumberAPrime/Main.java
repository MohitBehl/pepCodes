import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);

        int t = scn.nextInt();

        while(t-- != 0){
            int n = scn.nextInt();

            System.out.println(isPrime(n) ? "prime" : "not prime");
        }
    }
    public static boolean isPrime(int n){
        for(int fac = 2 ; fac * fac <= n ; fac++){
            if(n % fac == 0){
                return false;
            }
        }
        return true;
    }
}