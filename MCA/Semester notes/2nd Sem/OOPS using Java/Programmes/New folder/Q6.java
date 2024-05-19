//WAP in java to illustrate the concept of local instance and static variable

public class Q6 {
    // Static variable
    static int staticVar = 50;

    // Instance variable
    int instanceVar = 10;

    public static void main(String[] args) {
        // Local variable
        int localVar = 5;

        System.out.println("Static variable: " + staticVar);
        
        // Creating an object of the class to access instance variable
        Q6 obj = new Q6();
        System.out.println("Instance variable: " + obj.instanceVar);

        System.out.println("Local variable: " + localVar);
        
        // Calling a method to demonstrate usage of local, instance, and static variables
        obj.methodExample();
    }

    void methodExample() {
        // Accessing local, instance, and static variables within a method
        int localVar = 20;
        System.out.println("Inside method - Local variable: " + localVar);
        System.out.println("Inside method - Instance variable: " + instanceVar);
        System.out.println("Inside method - Static variable: " + staticVar);
    }
}
