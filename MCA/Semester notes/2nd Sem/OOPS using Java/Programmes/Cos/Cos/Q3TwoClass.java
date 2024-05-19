package Cos;

class first{
    public void display(){
        System.out.println("Hello from class first");
    }
}
class second extends first{
    public void display2(){
        System.out.println("Hello from class second");
    }

}
public class Q3TwoClass {
    public static void main(String[] args) {
        second s = new second();
        s.display();
        s.display2();
    } 
}
