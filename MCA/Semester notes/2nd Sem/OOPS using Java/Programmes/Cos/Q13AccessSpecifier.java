package Cos;
public class Q13AccessSpecifier {
    public static int publicField = 10;
    private final static int privateField = 20;
    static int defaultField = 30;
    protected final static int protectedField = 40;

    public static void publicMethod() {
        System.out.println("This is a public method");
        System.out.println("Value of public int: " + publicField);
    }

    private static void privateMethod() {
        System.out.println("This is a private method");
        System.out.println("Value of private int: " + privateField);
    }

    static void defaultMethod() {
        System.out.println("This is a default method");
        System.out.println("Value of default int: " + defaultField);
    }

    protected static void protectedMethod() {
        System.out.println("This is a protected method");
        System.out.println("Value of protected int: " + protectedField);
    }

    public static void main(String[] args) {
        publicMethod();
        privateMethod();
        defaultMethod();
        protectedMethod();
    }
}
