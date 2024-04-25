import java.util.Scanner;

public class Calculatorr {
    public static int add(int a, int b) {
        return a + b;
    }

    public static int sub(int a, int b) {
        return a - b;
    }

    public static int mul(int a, int b) {
        return a * b;
    }

    public static int div(int a, int b) {
        return a / b;
    }

    public static int mod(int a, int b) {
        return a % b;
    }

    public static void main(String[] args) {
        int num1, num2;
        int op = 1;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter first number: ");
            num1 = sc.nextInt();
            System.out.println("Enter Second Number: ");
            num2 = sc.nextInt();
            while (op == 1) { 
                System.out.println("Enter Operation to perform: ");
                System.out.println("1. Add\n2. Sub\n3. Mul\n4. Div\n5. Mod\n6. Exit");
                op = sc.nextInt();
                switch (op) {
                    case 1 -> System.out.println("Addition of " + num1 + " and " + num2 + " is " + add(num1, num2));
                    case 2 -> System.out.println("Subtraction of " + num1 + " and " + num2 + " is " + sub(num1, num2));
                    case 3 -> System.out.println("Multiplication of " + num1 + " and " + num2 + " is " + mul(num1, num2));
                    case 4 -> System.out.println("Division of " + num1 + " and " + num2 + " is " + div(num1, num2));
                    case 5 -> System.out.println("Modulus of " + num1 + " and " + num2 + " is " + mod(num1, num2));
                    case 6 -> {
                        System.out.println("Exiting...");
                        return;
                    }
                    default -> System.out.println("Invalid Operation");
                }
                System.out.println("Do you want to perform another operation?");
                System.out.println("1 for yes / 0 for no");
                op = sc.nextInt();
            }
        }
    }
}
