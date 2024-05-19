//WAP in java for method overriding

// Superclass
class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Subclass inheriting from Animal
class Dog extends Animal {
    // Overriding the sound method
    void sound() {
        System.out.println("Dog barks");
    }
}

// Subclass inheriting from Animal
class Cat extends Animal {
    // Overriding the sound method
    void sound() {
        System.out.println("Cat meows");
    }
}

public class Q11 {
    public static void main(String[] args) {
        Animal myAnimal = new Animal();  // Create a Animal object
        Animal myDog = new Dog();        // Create a Dog object
        Animal myCat = new Cat();        // Create a Cat object

        myAnimal.sound();  // Call the sound method on the Animal object
        myDog.sound();     // Call the sound method on the Dog object
        myCat.sound();     // Call the sound method on the Cat object
    }
}
