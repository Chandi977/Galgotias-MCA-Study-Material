//WAP in java to understand the difference between print() and println()

public class Q2 {
    public static void main(String[] args) {
        // Using println() method
        System.out.println("Hello, World!"); // This will print "Hello, World!" followed by a newline
        
        // Using print() method
        System.out.print("Hello, "); // This will print "Hello, " without a newline
        System.out.println("World!"); // This will print "World!" followed by a newline
        
        // Printing multiple values using print()
        System.out.print("Java");
        System.out.print(" is");
        System.out.print(" awesome!");
        // This will print "Java is awesome!" without any newline
        
        // Printing multiple values using println()
        System.out.println("Java");
        System.out.println(" is");
        System.out.println(" awesome!");
        // This will print each word on a new line
    }
}
