//WAP in java for chaining constructor

public class Q20 {
    private String name;
    private int age;

    // Default constructor
    public Q20() {
        this("Unknown", 0);  // Calling parameterized constructor
    }
    // Parameterized constructor
    public Q20(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Q20 person1 = new Q20();  // Calls default constructor
        Q20 person2 = new Q20("John", 30);  // Calls parameterized constructor

        person1.display();
        person2.display();
    }
}
