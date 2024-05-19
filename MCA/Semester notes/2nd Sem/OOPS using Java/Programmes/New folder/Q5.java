//WAP in java product of two numbers (input by the user)

import java.util.Scanner;
public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.println("Enter first value");
        a = sc.nextInt();
        System.out.println("Enter second value");
        b = sc.nextInt();
        System.out.println("The product of two numbers: " + a*b);
        sc.close(); 
    }
}
