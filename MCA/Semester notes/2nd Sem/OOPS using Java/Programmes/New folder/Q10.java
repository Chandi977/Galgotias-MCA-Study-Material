//WAP in java for method overloading

public class Q10 {
    
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two double numbers
    public double add(double a, double b) {
        return a + b;
    }

    // Method to concatenate two strings
    public String add(String a, String b) {
        return a + " " + b;
    }

    public static void main(String[] args) {
        Q10 calculator = new Q10();

        // Calling add() method with two integers
        System.out.println("Sum of 5 and 3: " + calculator.add(5, 3));

        // Calling add() method with three integers
        System.out.println("Sum of 5, 3, and 2: " + calculator.add(5, 3, 2));

        // Calling add() method with two double numbers
        System.out.println("Sum of 5.5 and 3.5: " + calculator.add(5.5, 3.5));

        // Calling add() method with two strings
        System.out.println("Concatenated string: " + calculator.add("Hello", "World"));
    }
}
