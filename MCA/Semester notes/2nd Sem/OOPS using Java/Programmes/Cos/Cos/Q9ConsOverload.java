package Cos;

public class Q9ConsOverload {
    int data = 50;
    // constructor overload
    public Q9ConsOverload() {
        this.data = 50;
    }
    public Q9ConsOverload(int data2) {
        this.data = data2;
    }
    public Q9ConsOverload(int data1,int data2) {
        this.data = data1 + data2;
    }

    public static void main(String[] args) {
        Q9ConsOverload obj1 = new Q9ConsOverload(10);
        Q9ConsOverload obj2 = new Q9ConsOverload(10, 20);
        Q9ConsOverload obj3 = new Q9ConsOverload();

        System.out.println("Constructor no parameters = " + obj1.data);
        System.out.println("Constructor with single parameters = " + obj2.data);
        System.out.println("Constructor with multiple parameters = " + obj3.data);
        
    }
}
