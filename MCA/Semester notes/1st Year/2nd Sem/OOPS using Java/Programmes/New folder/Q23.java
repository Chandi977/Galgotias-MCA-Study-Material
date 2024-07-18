// Interface for Animal
interface Animal {
    void eat();
}

// Interface for Bird
interface Bird {
    void fly();
}

// Class implementing multiple interfaces
class Sparrow implements Animal, Bird {
    @Override
    public void eat() {
        System.out.println("Sparrow eats insects.");
    }

    @Override
    public void fly() {
        System.out.println("Sparrow flies high.");
    }
}

public class Q23 {
    public static void main(String[] args) {
        Sparrow sparrow = new Sparrow();

        // Calling methods
        sparrow.eat();
        sparrow.fly();
    }
}
