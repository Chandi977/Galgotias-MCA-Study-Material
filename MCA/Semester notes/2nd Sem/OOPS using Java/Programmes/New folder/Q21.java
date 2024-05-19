//WAP in java for abstract method and abstract class

// Abstract class
abstract class Shape {
    // Abstract method (no implementation)
    abstract void draw();

    // Concrete method
    void display() {
        System.out.println("Displaying shape...");
    }
}

// Concrete subclass of Shape
class Circle extends Shape {
    // Implementing abstract method
    void draw() {
        System.out.println("Drawing circle...");
    }
}

// Concrete subclass of Shape
class Rectangle extends Shape {
    // Implementing abstract method
    void draw() {
        System.out.println("Drawing rectangle...");
    }
}

public class Q21 {
    public static void main(String[] args) {
        Shape shape1 = new Circle();  // Upcasting
        Shape shape2 = new Rectangle();  // Upcasting

        shape1.draw();
        shape1.display();

        shape2.draw();
        shape2.display();
    }
}
