package Cos;

public class Q27TryCatch {
    public static void main(String[] args) {
        try {
            // Code that may throw an exception
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Catching specific exception
            System.out.println("Exception caught: Division by zero");
        } finally {
            // Code that will always execute, regardless of whether an exception occurred or not
            System.out.println("Finally block executed");
        }
    }

    public static int divide(int dividend, int divisor) {
        return dividend / divisor;
    }
}
