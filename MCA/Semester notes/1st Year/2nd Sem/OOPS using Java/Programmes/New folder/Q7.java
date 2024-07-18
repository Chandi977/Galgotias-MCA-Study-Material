//WAP in java to implement implicit and explicit typecasting

public class Q7 {
    public static void main(String[] args) {
        // Implicit type casting (widening conversion)
        int numInt = 100;
        long numLong = numInt;  // int is automatically cast to long
        float numFloat = numLong;  // long is automatically cast to float
        System.out.println("Implicit Type Casting:");
        System.out.println("int to long: " + numLong);
        System.out.println("long to float: " + numFloat);

        // Explicit type casting (narrowing conversion)
        double numDouble = 123.456;
        int numIntExplicit = (int) numDouble;  // double is explicitly cast to int
        System.out.println("\nExplicit Type Casting:");
        System.out.println("double to int: " + numIntExplicit);

        // Explicit type casting with loss of data
        int numInt2 = 257;
        byte numByte = (byte) numInt2;  // int is explicitly cast to byte (loss of data for values > 127)
        System.out.println("\nExplicit Type Casting with Loss of Data:");
        System.out.println("int to byte: " + numByte);
    }
}
