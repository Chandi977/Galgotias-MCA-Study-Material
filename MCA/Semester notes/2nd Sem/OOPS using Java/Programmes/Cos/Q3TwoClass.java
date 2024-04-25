package Cos;

class first{
    public first(){
        System.out.println("Hello from class first");
    }
}
class second extends first{
    public second(){
        System.out.println("Hello from class second");
    }
}
public class Q3TwoClass {
    public static void main(String[] args) {
        second s = new second();
        System.out.println("Yaha s mai garbage value dega : "+s);
    }
    
}
