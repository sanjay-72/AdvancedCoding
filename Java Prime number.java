import java.io.*;
import java.util.*;
class Prime
{
    boolean isPrime(int n)
    {
        if(n == 1) return false;
        for(int i = 2;i<n;i++)
        {
            if(n%i == 0) 
            {
                return false;
            }
        }
        return true;
    }
    void checkPrime(int ... arr)
    {
        for(int i = 0;i<arr.length;i++)
        {
            if(isPrime(arr[i]))
            {
                System.out.print(arr[i]+" ");
            }
        }
        System.out.println();
    }
}
public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int n3 = sc.nextInt();
        int n4 = sc.nextInt();
        int n5 = sc.nextInt();
        Prime ob=new Prime();
        ob.checkPrime(n1);
        ob.checkPrime(n1,n2);
        ob.checkPrime(n1,n2,n3);
        ob.checkPrime(n1,n2,n3,n4,n5);
    }
}
