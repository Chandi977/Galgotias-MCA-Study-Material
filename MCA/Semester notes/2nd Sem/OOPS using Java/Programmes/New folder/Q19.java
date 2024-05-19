//WAP in java for super keyword

class Parent {
    Parent() {
        System.out.println("This is Parent class constructor.");
    }
}

class Child extends Parent {
    Child() {
        super(); // Calling Parent class constructor
        System.out.println("This is Child class constructor.");
    }
}

public class Q19 {
    public static void main(String[] args) {
        Child childObj = new Child();
    }
}
