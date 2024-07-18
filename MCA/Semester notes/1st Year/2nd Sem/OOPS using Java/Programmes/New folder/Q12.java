//WAP in java to show run time polymorphism (up casting)

// Parent class
class Vehicle {
    void move() {
        System.out.println("Vehicle moves");
    }
}

// Child class extending Vehicle
class Car extends Vehicle {
    // Overriding the move method
    void move() {
        System.out.println("Car moves on the road");
    }
}

// Child class extending Vehicle
class Boat extends Vehicle {
    // Overriding the move method
    void move() {
        System.out.println("Boat moves on water");
    }
}

public class Q12 {
    public static void main(String[] args) {
        // Upcasting
        Vehicle myVehicle1 = new Car();  // Creating Car object and assigning to Vehicle reference
        Vehicle myVehicle2 = new Boat(); // Creating Boat object and assigning to Vehicle reference

        myVehicle1.move();  // Calls Car's move method
        myVehicle2.move();  // Calls Boat's move method
    }
}
