package Cos;
// Class to be cloned
class Student implements Cloneable {
    String name;
    Address address;

    public Student(String name, Address address) {
        this.name = name;
        this.address = address;
    }

    // Shallow copy
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    // Deep copy
    public Student deepClone() {
        Address clonedAddress = new Address(this.address.street, this.address.city);
        return new Student(this.name, clonedAddress);
    }

    @Override
    public String toString() {
        return "Student [name=" + name + ", address=" + address + "]";
    }
}

// Address class for deep copy
class Address {
    String street;
    String city;

    public Address(String street, String city) {
        this.street = street;
        this.city = city;
    }

    @Override
    public String toString() {
        return "Address [street=" + street + ", city=" + city + "]";
    }
}

public class Q24ClassClone {
    public static void main(String[] args) throws CloneNotSupportedException {
        Address address = new Address("123 Main St", "City");
        Student originalStudent = new Student("John", address);

        // Shallow copy
        Student clonedStudent = (Student) originalStudent.clone();
        System.out.println("Shallow Copy: ");
        System.out.println("Original: " + originalStudent);
        System.out.println("Cloned: " + clonedStudent);

        // Deep copy
        Student deepClonedStudent = originalStudent.deepClone();
        System.out.println("\nDeep Copy: ");
        System.out.println("Original: " + originalStudent);
        System.out.println("Deep Cloned: " + deepClonedStudent);
    }
}
