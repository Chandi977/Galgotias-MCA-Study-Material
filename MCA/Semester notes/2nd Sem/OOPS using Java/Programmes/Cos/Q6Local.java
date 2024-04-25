package Cos;

public class Q6Local {
    public static int a = 15;
    public static void main(String[] args) {
        int a = 10;
        System.out.println("Variable from Local A = "+a);
        {
            a = 12;
            System.out.println("Variable from Local A = "+a);
        }
        System.out.println("Variable from static A = " + Q6Local.a);
    }

    
}
