package Cos;

public class Q7ImplecitandExplicit {
    public static void main(String [] args){
        int num = 90;
        double num2 = num; //Implicit type casting
        System.out.println("Implicit type casting Integer "+num+" to double  "+num2);

        double num3 = 45.00;
        int num4 = (int) num3; //Explicit type casting
        System.out.println("Explicit type casting Integer "+num3+" to double  "+num4);
    }
}
