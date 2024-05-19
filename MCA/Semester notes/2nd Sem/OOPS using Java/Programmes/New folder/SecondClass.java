//WAP in java with two classes create a object of first class and call into another class (having main method)
 
class FirstClass {
    public void display(){
        System.out.println("Calling method of another class");
    }
    
}
public class SecondClass {
    public static void main(String[] args) {
        FirstClass obj = new FirstClass();
        obj.display();
    }
}
