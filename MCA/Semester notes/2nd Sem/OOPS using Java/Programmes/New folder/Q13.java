//WAP in java for access specifiers (all four)

public class Q13 {

    // Public access specifier
    public String publicVar = "Public variable";

    // Protected access specifier
    protected String protectedVar = "Protected variable";

    // Default access specifier
    String defaultVar = "Default variable";

    // Private access specifier
    private String privateVar = "Private variable";

    // Public method
    public void publicMethod() {
        System.out.println("This is a public method");
    }

    // Protected method
    protected void protectedMethod() {
        System.out.println("This is a protected method");
    }

    // Default method
    void defaultMethod() {
        System.out.println("This is a default method");
    }

    // Private method
    private void privateMethod() {
        System.out.println("This is a private method");
    }

    public static void main(String[] args) {
        Q13 obj = new Q13();

        // Accessing variables and methods using object
        System.out.println(obj.publicVar);
        System.out.println(obj.protectedVar);
        System.out.println(obj.defaultVar);
        // System.out.println(obj.privateVar);  // This will throw compilation error because privateVar is private

        obj.publicMethod();
        obj.protectedMethod();
        obj.defaultMethod();
        // obj.privateMethod();  // This will throw compilation error because privateMethod is private
    }
}
