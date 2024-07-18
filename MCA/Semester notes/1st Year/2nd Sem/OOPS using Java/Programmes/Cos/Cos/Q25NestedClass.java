package Cos;
public class Q25NestedClass {

    // Nested Inner Class (Static Inner Class)
    static class StaticInnerClass {
        void display() {
            System.out.println("Inside Static Inner Class");
        }
    }

    // Non-static Nested Inner Class (Inner Class)
    class InnerClass {
        void display() {
            System.out.println("Inside Non-static Inner Class");
        }
    }

    // Method with Local Inner Class
    void localInnerClassExample() {
        class LocalInner {
            void display() {
                System.out.println("Inside Local Inner Class");
            }
        }
        LocalInner localInner = new LocalInner();
        localInner.display();
    }

    // Method with Anonymous Inner Class
    void anonymousInnerClassExample() {
        Thread t = new Thread(new Runnable() {
            @Override
            public void run() {
                System.out.println("Inside Anonymous Inner Class");
            }
        });
        t.start();
    }

    public static void main(String[] args) {
        // Accessing Static Inner Class
        Q25NestedClass.StaticInnerClass staticInnerObj = new Q25NestedClass.StaticInnerClass();
        staticInnerObj.display();

        // Accessing Non-static Inner Class
        Q25NestedClass outerObj = new Q25NestedClass();
        Q25NestedClass.InnerClass innerObj = outerObj.new InnerClass();
        innerObj.display();

        // Accessing Local Inner Class
        outerObj.localInnerClassExample();

        // Accessing Anonymous Inner Class
        outerObj.anonymousInnerClassExample();
    }
}
