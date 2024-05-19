// A generic class representing a generic box that can hold any type of object
class Box<T> {
    private T item;

    public void setItem(T item) {
        this.item = item;
    }

    public T getItem() {
        return item;
    }

    public void displayItemType() {
        System.out.println("Type of item in the box: " + item.getClass().getName());
    }
}

public class Q38 {
    public static void main(String[] args) {
        // Create a Box to hold an integer
        Box<Integer> intBox = new Box<>();
        intBox.setItem(123);
        System.out.println("Item in the integer box: " + intBox.getItem());
        intBox.displayItemType();

        // Create a Box to hold a string
        Box<String> stringBox = new Box<>();
        stringBox.setItem("Hello, Generics!");
        System.out.println("Item in the string box: " + stringBox.getItem());
        stringBox.displayItemType();
    }
}
