
import java.util.Scanner;

class First {
    int a, b;
    public First() {
        System.out.println("Addition of " + a + " and " + b + " is : " + (a + b));
    }
}

public class constructorInfo extends First {
    public constructorInfo() {
        try (Scanner sc = new Scanner(System.in)) {
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            super.a = num1;
            super.b = num2;
        }
        
    }

    public static void main(String[] args) {
        // constructorInfo obj = new constructorInfo(10, 20);
        // System.out.println(obj);
        constructorInfo obj = (constructorInfo) new First();
        System.out.println(obj);
    }
}
