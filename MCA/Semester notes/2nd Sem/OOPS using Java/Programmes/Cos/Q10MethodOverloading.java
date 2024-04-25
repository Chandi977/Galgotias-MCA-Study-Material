package Cos;

public class Q10MethodOverloading {
    int add(){
        int a = 10;
        int b = 20;
        return a + b;
    }
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    public static void main(String []args){
        Q10MethodOverloading obj1 = new Q10MethodOverloading();
        Q10MethodOverloading obj2 = new Q10MethodOverloading();
        Q10MethodOverloading obj3 = new Q10MethodOverloading();
        System.out.println("Method with no parameter : "+obj1.add());
        System.out.println("Method with two parameter : "+obj2.add(10, 20));
        System.out.println("Method with three parameter : "+obj3.add(12,45,67));
    }
}
