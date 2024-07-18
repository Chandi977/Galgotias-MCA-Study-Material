package Cos;
//WAP in java for chaining constructor
public class Q20ConstructorChain {
    private String name;
    private int age;

    // Default constructor
    public Q20ConstructorChain() {
        this("Unknown", 0);  // Calling parameterized constructor
    }
    // Parameterized constructor
    public Q20ConstructorChain(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Q20ConstructorChain person1 = new Q20ConstructorChain();  // Calls default constructor
        Q20ConstructorChain person2 = new Q20ConstructorChain("John", 30);  // Calls parameterized constructor

        person1.display();
        person2.display();
    }
}
