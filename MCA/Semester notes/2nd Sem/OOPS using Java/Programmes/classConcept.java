import java.util.Scanner;

class First {
    int add(int a, int b) {
        return a + b;
    }
}

class Second extends First {
    int sub(int a, int b) {
        return a - b;
    }
}

public class classConcept extends Second {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter first number: ");
            int num1 = sc.nextInt();
            System.out.println("Enter second number: ");
            int num2 = sc.nextInt();
            
            classConcept obj = new classConcept();
            int sum = obj.add(num1, num2);
            int difference = obj.sub(num1, num2);
            
            System.out.println("Sum: " + sum);
            System.out.println("Difference: " + difference);
        }
    }
}
