//WAP in java for constructor overloading

public class Q9 {
    private int id;
    private String name;
    private int age;

    // Constructor with no parameters
    public Q9() {
        this.id = 0;
        this.name = "Unknown";
        this.age = 0;
    }

    // Constructor with one parameter
    public Q9(int id) {
        this.id = id;
        this.name = "Unknown";
        this.age = 0;
    }

    // Constructor with two parameters
    public Q9(int id, String name) {
        this.id = id;
        this.name = name;
        this.age = 0;
    }

    // Constructor with three parameters
    public Q9(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Student ID: " + id);
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
    }

    public static void main(String[] args) {
        // Using default constructor
        Q9 student1 = new Q9();
        student1.display();

        // Using constructor with one parameter
        Q9 student2 = new Q9(101);
        student2.display();

        // Using constructor with two parameters
        Q9 student3 = new Q9(102, "John");
        student3.display();

        // Using constructor with three parameters
        Q9 student4 = new Q9(103, "Doe", 20);
        student4.display();
    }
}
