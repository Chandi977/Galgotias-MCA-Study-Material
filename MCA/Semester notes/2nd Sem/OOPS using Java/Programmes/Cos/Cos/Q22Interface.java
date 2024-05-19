//WAP in java for interface
package Cos;
// Define an interface
interface Animal {
    // Abstract method (does not have a body)
    void sound();

    // Default method
    default void eat() {
        System.out.println("This animal eats food.");
    }

    // Static method
    static void sleep() {
        System.out.println("This animal sleeps.");
    }
}

// Implementing the Animal interface
class Dog implements Animal {
    // Implementing sound method
    public void sound() {
        System.out.println("Dog barks");
    }

    // Overriding the default eat method
    public void eat() {
        System.out.println("Dog eats bones.");
    }
}

// Implementing the Animal interface
class Cat implements Animal {
    // Implementing sound method
    public void sound() {
        System.out.println("Cat meows");
    }
}

public class Q22Interface {
    public static void main(String[] args) {
        Animal myDog = new Dog();  // Upcasting
        Animal myCat = new Cat();  // Upcasting

        myDog.sound();
        myDog.eat();  // Overridden method
        Animal.sleep();  // Static method

        myCat.sound();
        myCat.eat();  // Default method
        Animal.sleep();  // Static method
    }
}
