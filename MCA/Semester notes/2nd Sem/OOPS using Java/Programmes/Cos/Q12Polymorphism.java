package Cos;

public class Q12Polymorphism {
    static int add(int a, int b){
        return a + b;
    }
    static double add(double a,double b){
        return a + b;
    }
    public static void main(String []args){
        System.out.println("Addition of two integers : "+ add(14,15));
        System.out.println("Addition of two doubles : "+ add(18.5,17.5));
    }
}
