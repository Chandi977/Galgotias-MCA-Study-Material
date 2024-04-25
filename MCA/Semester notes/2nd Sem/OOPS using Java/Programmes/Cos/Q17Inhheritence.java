package Cos;
// Parent class
class A {
    void display() {
        System.out.println("This is the parent class");
    }
}

// Single Inheritance
class B extends A {
    void show() {
        System.out.println("This is the child class");
    }
}

// Multilevel Inheritance
class C extends B {
    void greet() {
        System.out.println("Hello from the grandchild class");
    }
}

// Hierarchical Inheritance
class D extends C {
    void message() {
        System.out.println("This is another child class");
    }
}

// Main class
public class Q17Inhheritence {
    public static void main(String[] args) {
        // Single Inheritance
        B child = new B();
        child.display(); 
        child.show();    
        
        System.out.println();
        
        // Multilevel Inheritance
        C grandChild = new C();
        grandChild.display(); 
        grandChild.show();    
        grandChild.greet();   
        
        System.out.println();
        
        // Hierarchical Inheritance
        D anotherChild = new D();
        anotherChild.display(); 
        anotherChild.message();
    }
}

