import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        int low = scn.nextInt();
        int high = scn.nextInt();

        printAllPrimes(low,high);
    }
    public static void printAllPrimes(int low , int high){
        for(int n = low ; n <= high ; n++){
            if(isPrime(n))
                System.out.println(n);
        }
    }

    public static boolean isPrime(int n){
        if(n == 0 || n == 1){
            return false;
        }
        for(int fac = 2 ; fac * fac <= n ; fac++){
            if(n % fac == 0){
                return false;
            }
        }
        return true;
    }
}