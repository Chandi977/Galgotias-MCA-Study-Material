//WAP in java for simple inheritance

// Parent class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Child class inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

public class Q17 {
    public static void main(String[] args) {
        // Creating an object of the child class
        Dog dog = new Dog();

        // Calling methods from both parent and child class
        dog.eat();  // inherited method from Animal class
        dog.bark(); // method of Dog class
    }
}
