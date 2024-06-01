# Introduction to Java

Java is an object-oriented, class-based, secured, platform-independent, and general-purpose programming language. Originally developed by James Gosling at Sun Microsystems and released in 1995, Java is a core component of Sun Microsystem’s Java platform. It follows the principle of "write once, run anywhere" (WORA), meaning that compiled Java code can run on all platforms supporting Java without recompilation.

## Different Editions of Java

### Java Platform, Standard Edition (Java SE)
Also known as Core Java, Java SE is the most basic and standard version of Java. It includes a wide variety of general-purpose APIs (like java.lang, java.util) and special-purpose APIs. Java SE is used to create desktop applications, covering everything from basic types and objects to high-level classes for networking, security, database access, GUI development, and XML parsing.

### Java Platform, Enterprise Edition (Java EE)
Built on top of Java SE, Java EE is used for developing web services, networking, server-side scripting, and other web-based applications. Java EE utilizes HTML, CSS, JavaScript, etc., to create web pages and services, making it one of the most widely used web development standards.

### Java Platform, Micro Edition (Java ME)
Java ME is used for developing embedded systems, mobiles, and small devices. It includes libraries and APIs from Java SE, along with its own set. Java ME is primarily focused on mobiles, wireless devices, set-top boxes, etc. Many phone apps are developed using Java ME.

### JavaFX
JavaFX, now merged with Java SE 8, is used to create rich GUIs in Java applications. It is supported by both desktop environments and web browsers.

# Features and Uses of Java

## Features of Java

### Simple
Java has a simple syntax and is easy to learn, especially for programmers familiar with C++. It removes rarely-used features like explicit pointers and operator overloading. Automatic garbage collection eliminates the need to manage memory manually.

### Object-Oriented
Everything in Java is an object, simplifying software development and maintenance. Key OOP concepts include classes, objects, polymorphism, inheritance, abstraction, and encapsulation.

### Platform Independent
Java code can be written once and run anywhere, making it platform-independent. Compiled Java code is converted into bytecode, which can run on multiple platforms without modification.

### Robust
Java uses strong memory management and automatic garbage collection to ensure robustness. Exception handling further enhances reliability.

### Portable
Java is portable, allowing bytecode to be carried to any platform.

### Multithreaded
Java supports multithreading, enabling the creation of multiple threads that share a common memory area. This is advantageous for web applications, multimedia applications, etc.

### Distributed
Java facilitates the creation of distributed applications using technologies like RMI (Remote Method Invocation) and EJB (Enterprise JavaBeans).

### Secure
Compiled Java code generates bytecode in a non-readable form, enhancing security.

## Uses of Java

Java is widely used for developing various types of applications:

### Banking
Java is used in banking for transaction management.

### Mobile App Development
Java is the primary language for developing Android applications, making it essential for mobile app development.

### Desktop Applications
Java provides AWT, Swings, and JavaFX for developing GUI desktop applications.

### Big Data
Java is used in Big Data for frameworks like Hadoop MapReduce.

### Web Applications
Java is used extensively in web development, with popular frameworks like Spring and Hibernate based on Java.

# JDK, JRE, and JVM

![java1](https://github.com/Chandi977/Galgotias-MCA-Study-Material/assets/55855799/a995c973-a635-4f1f-ba55-7ec1cd5c5e9d)

JDK, JRE, and JVM are essential components of the Java programming language, providing the necessary environment to develop and run Java programs.

## JDK (Java Development Kit)

JDK stands for Java Development Kit, which is used for developing Java applications. It includes development tools that provide an environment for writing, compiling, and debugging Java programs. JDK consists of two main components:

- Development Tools: Tools such as javac (Java Compiler) and java (Java Interpreter) are included in the JDK to facilitate Java development.
- JRE (Java Runtime Environment): JDK also includes JRE, which is necessary for executing Java programs.

## JRE (Java Runtime Environment)

JRE stands for Java Runtime Environment, which provides an environment for running Java applications. JRE includes libraries and other files required for executing Java programs. It does not contain development tools and is used by end-users to run Java applications.

## JVM (Java Virtual Machine)

JVM stands for Java Virtual Machine, which is an integral part of both JDK and JRE. JVM is responsible for executing Java bytecode generated by the Java compiler. It interprets the bytecode and translates it into machine code that can be executed by the host operating system. JVM ensures platform independence by providing a consistent runtime environment for Java programs.

# Java `main()` Method

In Java, the `main()` method serves as the entry point for the execution of a program. Let's dissect the signature of the `main()` method and understand its components:

```java
public class HelloWorld {
    public static void main(String args[]) {
        System.out.println("Hello World");
    }
}
```
# Explanation of the Java `main()` Method

In Java, the `main()` method is a crucial component of any program. Let's break down the different aspects of the `main()` method:

- **public**: The `public` keyword is an access modifier that specifies the visibility of the `main()` method. By declaring the `main()` method as `public`, it can be accessed from outside the class. This is essential because the Java Virtual Machine (JVM) calls the `main()` method from outside the class during program execution.

- **static**: The `static` keyword indicates that the `main()` method belongs to the class itself, rather than to instances of the class. This allows the `main()` method to be called without creating an instance of the class. As the JVM calls the `main()` method directly, without creating an object of the class, it needs to be declared as `static`.

- **void**: The `void` keyword specifies that the `main()` method does not return any value. In Java, the `main()` method is simply the starting point for the execution of the program, and it does not produce any output.

- **main**: `main` is the name of the method. In Java, the `main()` method serves as the entry point for the program, where the execution begins.

- **String args[]**: `String` is a class in Java used to handle strings, and `args` is a reference variable that refers to an array of strings. The `main()` method can accept command-line arguments, which are passed as an array of strings. These arguments allow external input to be passed to the program at runtime.

The provided explanation outlines the significance of each component of the `main()` method in Java. It also includes a simple example Java program that prints "Hello World" to the console, illustrating the structure and usage of the `main()` method.

# Compiling and Running a Java Program

Below are the steps to compile and run your first Java program:

1. **Write your Java program**: Open a text editor like Notepad or Notepad++ and write your Java program. Save it with a `.java` extension. Remember that the file name and the class name should match. For example, if you are creating a class `HelloWorld`, save it as `HelloWorld.java`.

2. **Open Command Prompt**: Open your command prompt.

3. **Set Directory**: Navigate to the directory where your Java program is saved using the `cd` command. For example:
    cd path/to/your/directory

4. **Compile your Java program**: Once you are in the directory where your Java program is saved, compile it using the `javac` command followed by the name of your Java file. For example:
    javac HelloWorld.java

5. **Run your Java program**: After compiling successfully, you can run your Java program using the `java` command followed by the name of your class (without the `.java` extension). For example:
    java HelloWorld


6. **View Output**: You should now see the output of your Java program in the command prompt.

Thats it! You've successfully compiled and run your Java program.

# Java Comments Guide

Comments in Java are statements that are not executed by the compiler. They are used to make the code more human-readable and assist in understanding its functionality. Proper usage of comments can greatly aid in code maintenance and debugging.

## Types of Comments

There are three types of comments in Java:

### 1. Single Line Comments

Single line comments are used to comment only one line of code. They are commonly used by beginner-level programmers to describe the functionality of the code.

**Syntax:**

```java
// Write your comment here
// Java program to show single line comment
public class HelloWorld {
    public static void main(String args[]) {
        // Print "Hello World" on console
        System.out.println("Hello World");
    }
}
```
### 2. Multi-line Comments

Multi-line comments are used to comment multiple lines of code. They are enclosed within /* and */ and are useful for commenting larger blocks of code.

Syntax:
```java
/*
    This
    is
    multiline
    comment
*/
```

### example 

```java
public class HelloWorld {
    public static void main(String args[]) {
       /*
       Here, we have
       declared a 
       variable and we are
       printing its value
       */
       int a = 10;
       System.out.println(a);
    }
}
```

### 3. Documentation Comments
Documentation comments are used for generating documentation pages for projects. They provide information about methods, parameters, etc., and are useful for reference purposes.

Syntax:
```java
/**
 * Comment start
 *
 * Tags are used to specify parameters, methods, headings, etc.
 * HTML tags can also be used, such as <h1>.
 *
 * Comment ends
 */

```
### Example:

```java
// Java program to illustrate documentation comments 
/**
 * Find product of four numbers! The FindPro program implements an application
 * that simply calculates product of four integers and Prints the output on the
 * screen.
 * 
 * @author Chandi Charan MAhato
 * @version 1.0
 * @since 2024-04-27
 */
public class FindPro {
    /**
     * This method is used to find the product of four integers.
     * 
     * @param num1 This is the first parameter to FindPro method
     * @param num2 This is the second parameter to FindPro method
     * @param num3 This is the third parameter to FindPro method
     * @param num4 This is the fourth parameter to FindPro method
     * @return int This returns the product of num1, num2, num3, and num4.
     */
    public int FindPro(int num1, int num2, int num3, int num4) {
        return (num1 * num2 * num3 * num4);
    }

    /**
     * This is the main method which makes use of the FindPro method.
     * 
     * @param args Unused.
     * @return Nothing.
     */

    public static void main(String args[]) {
        FindPro obj = new FindPro();
        int pro = obj.FindPro(10, 20, 30, 40);

        System.out.println("Product of 10, 20, 30 and 40 is : " + pro);
    }
}
```
### Conclusion
Comments are an essential part of Java programming. They improve code readability and facilitate better understanding and maintenance of the codebase.

# Introduction to Variables and Declaration in Java

## Introduction to Variables

A Variable is a name given to a memory location. It is used to store a value that may vary. Java is a statically typed language, and hence, all the variables are declared before use. 

## Variable Declaration

In Java, we can declare variables as follows:

- **type**: Type of the data that can be stored in this variable. It can be int, float, double, etc.
- **name**: Name given to the variable.

### Syntax:

```java
data_type variable_name;
int x;
```
In this way, we can only create a variable in the memory location. Currently, it doesn’t have any value. We can assign the value in this variable by using two ways:

-By using variable initialization.
-By taking input
-Here, we have discussed only the first way, i.e., variable initialization. We will discuss the second way later.

###Variable Initialization
Variables can be initialized in Java during declaration using the following syntax:

```java
data_type variable_name = value;
```

### example

```java
int x = 10;
```
This statement declares a variable named x of type int and initializes it with the value 10.

# Note
In Java, all variables must be declared before use.
Variable declaration allocates memory for the variable but does not assign a value to it. This must be done separately through initialization.

# Variables Naming Convention in Java

When naming variables in Java, it's important to follow certain conventions to ensure code readability and maintainability.

## Guidelines

1. **Short and Meaningful**: Variable names should be concise yet descriptive, indicating their purpose or meaning within the context of the program.

2. **Lowercase Start**: Variable names should begin with a lowercase letter.

3. **Special Characters**: Variable names can begin with special characters such as `_` (underscore) and `$` (dollar) sign, although it's generally recommended to avoid using special characters at the start of variable names for clarity.

4. **Camel Case**: If a variable name contains multiple words, use camel case where each word starts with a lowercase letter, except for the first word which starts with a lowercase letter. For example: `codingNinja`, `camelCase`.

5. **Avoid Single Character Names**: Except for temporary variables like loop counters, try to avoid single character variable names such as `i`, `j`, and `k`. Instead, choose more descriptive names that convey the purpose of the variable.

6. **No Whitespaces**: Variable names cannot contain whitespaces. If needed, use camel case or underscores to separate words.

7. **Avoid Keywords**: Avoid using keywords or pre-defined literals as variable names, as they have special meanings in the Java language.

## Example

```java
int numberOfStudents;
double averageScore;
String studentName;
```

# Java Keywords

![java keywords](https://github.com/Chandi977/Galgotias-MCA-Study-Material/assets/55855799/60379673-6488-4ca0-afdf-c2e723307ffb)

Keywords in Java, also known as reserved words, are predefined words with special meanings. These words cannot be used as variable names, as doing so will result in a compile-time error. Below is a list of all the Java keywords:

- `abstract`
- `assert`
- `boolean`
- `break`
- `byte`
- `case`
- `catch`
- `char`
- `class`
- `const` (not used, reserved for future use)
- `continue`
- `default`
- `do`
- `double`
- `else`
- `enum`
- `extends`
- `final`
- `finally`
- `float`
- `for`
- `goto` (not used, reserved for future use)
- `if`
- `implements`
- `import`
- `instanceof`
- `int`
- `interface`
- `long`
- `native`
- `new`
- `package`
- `private`
- `protected`
- `public`
- `return`
- `short`
- `static`
- `strictfp`
- `super`
- `switch`
- `synchronized`
- `this`
- `throw`
- `throws`
- `transient`
- `try`
- `void`
- `volatile`
- `while`

## Examples

### Correct Usage

```java
int x = 10;
int _x = 10;
int $x = 10;
int x1 = 10;
```

## Incorrect Usage
```java
int 1x = 10;
int num ber = 10;
```
In the incorrect examples, 1x and num ber are using keywords or reserved words as variable names, which is not allowed in Java.

# Data Types in Java

In Java, data types define the type of value that can be stored in a variable. There are two categories of data types:

## 1. Primitive Data Types

Primitive data types are predefined by the language and are named by a keyword or reserved keyword. There are eight types of primitive data types in Java:

### boolean
- Specifies only one bit of information, storing either `true` or `false`.

### byte
- An 8-bit signed two’s complement integer, with values ranging from -128 to 127. Commonly used to save memory in large arrays.

### short
- A 16-bit signed two’s complement integer, capable of holding values between -32768 to 32767. Like `byte`, used to save memory in large arrays.

### int
- A 32-bit signed two’s complement integer, with values ranging from -2,147,483,648 to 2,147,483,647. Default value is 0.

### long
- A 64-bit two’s complement integer, holding values between -2^63 to 2^63-1. Default value is 0.

### float
- Used to store floating-point numbers, with single-precision 32-bit IEEE 754 floating-point format. Recommended for saving memory in large arrays of floating-point numbers. Default value is 0.0f.

### double
- Used for storing decimal values, with double-precision 64-bit IEEE 754 floating-point format. Default value is 0.0d.

### char
- Stores characters as single 16-bit Unicode characters.

## 2. Non-Primitive Data Types

Non-Primitive data types refer to objects. Examples include `ArrayList` and `String`. These will be discussed later.

## Example

### Primitive Data Types

```java
int price = 5000;                 // Integer Value
float rateOfInterest = 5.99f;     // Floating point number
char ch = 'a';                    // Character
String str = "Coding Ninjas";     // String

```
# Scope of Variables in Java

The scope of a variable refers to the part of the program where the variable is accessible. It is determined at compile time. There are mainly two types of variable scope in Java:

## 1) Local Variables Scope

A local variable is defined inside a block, method body, or constructor. These variables can't be accessed outside the method in which they are declared.

### Example:

```java
public class VariableScope {
    void method() {
        // Local variable (Method Level Scope)
        // This variable can't be accessed outside
        // the method body.
        int x;
    }
}
```

## 2) Member/Class Level Variable Scope
A member or class-level variable is declared inside the class but outside the method body, block, or constructor. These variables can be directly accessed anywhere in the class.

Example:
```java
class VariableScope {
    // Variable defined inside the class
    int x;
}

public class VariableScopeDemo {
    public static void main(String args[]) {
        // Creating VariableScope class object
        VariableScope obj = new VariableScope();
        
        // Assigning values to the variable
        obj.x = 10;
        
        // Printing the value
        System.out.println(obj.x);
    }
}

```
Output:
10

# Types of Variables in Java

A variable is a name given to a memory location. There are three types of variables in Java:

1. Local Variable
2. Instance Variable
3. Static Variable

## Local Variables

A variable that is defined inside a block, method body, or constructor is called a local variable. These variables are created when the methods are called and they get destroyed when the methods are executed and return to the caller. The initialization of the local variable is mandatory. If you don’t initialize the variable before use, the compiler will give a compile-time error.

Example:

```java
public class Addition {

   // Function to add two numbers
   public void add() {

      // Local variables
      int a = 10;
      int b = 20;
      int c = a + b;

      // Printing the sum
      System.out.println(c);
   }

   // Driver Code
   public static void main(String args[]) {
      // Creating an object of Addition class
      Addition obj = new Addition();
      // Function Call
      obj.add();
   }
}
```

Output:
30

## Instance Variables

A variable that is declared inside the class but outside the method body, block, or constructor is known as an instance variable. It is a non-static variable. These variables are created when an instance (object) of the class is created and are destroyed when the object is destroyed. Initialization of the instance variable is not mandatory. Even if you don’t initialize the instance variable, it has a default value in it. Instance variables can be accessed only by creating the object of the class.

```java
class Student {

    // These are instance variables
    // these are declared inside the 
    // class but outside the method body
    String name;
    int rollno;
}

public class StudentRecords {
    public static void main(String args[]) {

        // Creating Student class object
        Student obj = new Student();

        // Assigning values in the variables
        obj.name = "Ram";
        obj.rollno = 10;

        // Printing name and rollno
        System.out.println(obj.name);
        System.out.println(obj.rollno);
    }
}
```

## output
Ram
10

## Static Variable
A variable that is declared as static is known as a static variable. It is also known as a class variable. These variables are created at the beginning of the program execution and destroyed automatically when the program execution ends. We can create only a single copy of a static variable. To access the static variables, we don’t need to create the object of the class. We can simply access the static variable as class_Name.variable_Name.

Example:
```java
class Student { 

    // static variables 
    public static int rollno; 
    public static String name = "Ram"; 
} 

public class StudentDemo { 
    public static void main(String args[]) { 

        // accessing static variable without creating object 
        Student.rollno = 10; 
        System.out.println(Student.name + " 's rollno is :" + Student.rollno); 
    } 
}
```

### Output
Ram’s rollno is 10

# TypeCasting in Java

TypeCasting in Java is the process of converting one primitive data type into another. TypeCasting can be done automatically or explicitly.

When we assign the value of one data type to another data type, there is a chance that the two data types might not be compatible with each other. The Java compiler will automatically perform the conversion if the data types are consistent. This type of conversion is known as Automatic Type Conversion. If the Java compiler cannot perform the conversion automatically, it needs to be cast explicitly.

There are two types of TypeCasting in Java:

1. Widening or Automatic Type Conversion
2. Narrowing or Explicit Type Conversion

## 1. Widening or Automatic Type Conversion

When we assign a value of a smaller data type to a larger data type, this process is known as Widening Type Casting. It is also known as Automatic Type Conversion because the Java compiler will perform the conversion automatically. This can happen only when the two data types are compatible.

### Widening Type Casting Hierarchy:

byte -> short -> int -> long -> float -> double


For example, in Java, `int` data types are compatible with `long` and `double`, but they are not compatible with `char` and `boolean` data types. Also, `char` and `boolean` data types are not compatible with each other.

### Example:

```java
public class WideningConversion {
    public static void main(String args[]) {

        // Automatic Type Conversion
        int i = 2147483647; // Int max value in java.
        long l = i; // Automatically converted to long, now we can extend l's value.
        l = l + 1;
        double d = l; // Automatically converted to double.
        System.out.println("Int value : " + i);
        System.out.println("Long value : " + l);
        System.out.println("Double value : " + d);
    }
}
```

Output:
Int value : 2147483647
Long value : 2147483648
Double value : 2.147483648E9

# 2. Narrowing or Explicit Type Conversion in Java

Narrowing or Explicit Type Conversion in Java occurs when we assign a value of a larger data type to a smaller data type. This process cannot be done automatically. We need to convert the type explicitly. If we don’t perform casting, the Java compiler will give a compile-time error.

## Narrowing Type Casting Hierarchy

double -> float -> long -> int -> short -> byte

Example

```java
public class ExplicitConversion {
    public static void main(String args[]) {

        // Explicit Type Conversion
        double d = 25.123;
        int i = (int) d;
        byte b = (byte) i;
        System.out.println("Double value : " + d);
        System.out.println("Int value : " + i);
        System.out.println("Byte value : " + b);
    }
}
```

Output:
Double value : 25.123
Int value : 25
Byte value : 25

# Overflow and Underflow in Java

Overflow in Java happens when we assign a value to a variable that is more than its range, while underflow occurs when a value is less than its range. In both cases, the Java compiler doesn’t throw any error. It simply changes the value.

## Example

```java
public class OverflowExample {

    public static void main(String args[]) {
    
        // Overflow
        int overFlow = 2147483647;
        System.out.println("Overflow : " + (overFlow + 1));         
        
        // Underflow
        int underFlow = -2147483648;
        System.out.println("Underflow : " + (underFlow - 1));
    }
}
```
output:
Overflow : -2147483648
Underflow : 2147483647

The int data type has a size of 4 bytes or 32 bits. The maximum value of the int data type is 2,147,483,647 (Integer.MAX_VALUE). When we increment this value by 1, it overflows and returns -2,147,483,648 (Integer.MIN_VALUE). This is overflow. Similarly, the minimum value of the int data type is -2,147,483,648 (Integer.MIN_VALUE). When we decrement this value by 1, it underflows and returns 2,147,483,647 (Integer.MAX_VALUE). This is underflow in Java.

# Input / Output In Java

Before discussing how to take input in Java, let’s first understand how to print a statement in Java.

## 1. Using `println()` method

In Java, we usually use the `println()` method to print text on the console. The text is passed as the parameter to this method in the form of a string. This method prints the text on the console, and after printing the text, the cursor remains at the start of the next line at the console. The next printing takes place from the next line.

### Example:

```java
System.out.println("Hello");
System.out.println("World!");
```
Output:
Hello
World

## 2. Using print() method
In Java, we usually use the print() method to print text on the console. The text is passed as the parameter to this method in the form of a string. This method prints the text on the console, and after printing the text, the cursor remains at the end of the text at the console. The next printing takes place from just here.

Example:
```java
System.out.print("Hello ");
System.out.print("World!");
```
Output:
Hello World!

## 3. Using printf() method
The printf() method in Java is used to print formatted data on the console. It may take multiple arguments.

Example:
```java
// This will print up to 2 decimal places
System.out.printf("Formatted with precision: PI = %.2f\n", Math.PI);

// Automatically appends Zeros to the rightmost part of the decimal
float n = 5.2f;
System.out.printf("Formatted to specific width: n = %.4f\n", n);
```
Output:
Formatted with precision: PI = 3.14
Formatted to specific width: n = 5.2000


Example:
```java
public class Test {

    public static void main(String args[]) {

        int age = 22;
        String firstName = "Chandi Charan";
        String lastName = "Mahato";

        System.out.println("My name is " + firstName + " " + lastName);
        System.out.println("My age is " + age);
    }
}
```
Output:
My name is Chandi Charan Mahato
My age is 22


In the above program, we have declared and initialized three variables: one int variable (age) and two String variables (firstName and lastName). Then, we are printing messages along with the values of these variables by using concatenation. We use String concatenation operator + for concatenating strings in java. 

# Taking Input in Java

In Java, there are mainly two ways to get input from the user:

1. Using Scanner class
2. Using BufferedReader class

## 1. Using Scanner class

Scanner is a class in Java that is used to take input from the user. It is present in the `java.util` package. The Scanner class is one of the most preferable ways to take input from the user. This class is used to read input of primitive types such as int, double, long, etc. and String. You need to import the `java.util` package before using the Scanner class.

### Methods of Scanner class in Java:

Java Scanner class provides various methods to read different primitive data types from the user.

![Inputs](https://github.com/Chandi977/Galgotias-MCA-Study-Material/assets/55855799/fde43240-a7c0-4f28-bf2d-ea40a8e31cb8)

### Example 1: Taking int value from the user

```java
import java.util.Scanner;

class TakingInputFromUser {
    public static void main(String args[]) {
        // Creating an object of Scanner class
        Scanner sc = new Scanner(System.in);

        // Read integer value from the user
        System.out.println("Enter first number:");
        int a = sc.nextInt();

        System.out.println("Enter second number:");
        int b = sc.nextInt();

        // Adding two values
        int c = a + b;

        // Printing the sum
        System.out.println("Sum is: " + c);
    }
}
```
Output:
Enter first number: 10
Enter second number: 20
Sum is: 30

### Example 2: Taking String from the user
```java
import java.util.Scanner;

class TakingInputFromUser {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a String:");
        // Read a string from the user
        String str = sc.nextLine();
        System.out.println("Your entered string is: " + str);
    }
}
```
Output:
Enter a String: Hello World
Your entered string is: Hello World

# Operators in Java
 

Operators in Java are the special symbol specific operations on one, two, or three operands and then return a result. There are different types of operators available in Java which are given below:

- Arithmetic Operators
- Unary Operators
- Assignment Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Ternary Operators
- Instance of Operators


# Arithmetic Operators in Java

Arithmetic Operators in Java are used to perform mathematical operations, such as addition, subtraction, multiplication, division, and modulus. The basic arithmetic operators in Java are as follows:

- Addition Operator (+): Used to add two numbers.
- Subtraction Operator (-): Used to subtract two numbers.
- Multiplication Operator (*): Used to multiply two numbers.
- Division Operator (/): Used to divide two numbers.
- Modulus Operator (%): Used to return the remainder of the division operation.

## Example

In this example, we are going to perform basic mathematical operations on two numbers.

```java
public class ArithmeticOperators {
    public static void main(String args[]) {
      
        // Taking two numbers
        int a = 50;
        int b = 20;
      
        // Performing addition operation
        System.out.println("Addition of " + a + " and " + b + " is : " + (a + b));

        // Performing subtraction operation
        System.out.println("Subtraction of " + a + " and " + b + " is : " + (a - b));

        // Performing multiplication operation
        System.out.println("Multiplication of " + a + " and " + b + " is : " + (a * b));

        // Performing division operation
        System.out.println("Division of " + a + " and " + b + " is : " + (a / b));

        // Performing modulus operation
        System.out.println("Modulus of " + a + " and " + b + " is : " + (a % b));
    }
}
```
Output:
Addition of 50 and 20 is : 70
Subtraction of 50 and 20 is : 30
Multiplication of 50 and 20 is : 1000
Division of 50 and 20 is : 2
Modulus of 50 and 20 is : 10

# Unary Operators in Java

Unary Operators in Java are operators that require only one operand. They perform various operations on single operands such as incrementing or decrementing the value by one, negation of an expression, or inverting the value of a boolean. Let’s understand the various unary operators with examples.

## (i) Unary minus operator (-)

This operator can be used to convert a negative value into a positive value or positive value into a negative value.

### Example:

```java
public class UnaryMinusOperator {
    public static void main(String args[]) {
        // Convert a positive value into a negative value
        int num1 = 10;
        num1 = -num1;
        System.out.println("Negative Value: " + num1);

        // Convert a negative value into a positive value
        int num2 = -20;
        num2 = -num2;
        System.out.println("Positive Value: " + num2);
    }
}
```
Output:
Negative Value: -10
Positive Value: 20

## (ii) Unary NOT Operator (!)
This operator is used to convert true to false and vice versa.

Example:
```java
public class UnaryOperator {
    public static void main(String args[]) {
        int a = 10, b = 20;
      
        // Without using NOT unary operator.
        System.out.println("(a < b) = " + (a < b));
       
        // Using unary NOT operator.
        System.out.println("!(a < b) = " + !(a < b));
    }
}
```
Output:
(a < b) = true
!(a < b) = false

## (iii) Increment Operator (++)
This operator is used to increment the value by 1.

Example:
```java
public class IncrementOperators {
    public static void main(String args[]) {
        // Initialize the variable
        int num = 10;

        // Post increment
        System.out.println("Post increment = " + num++);

        // Pre increment
        System.out.println("Pre increment = " + ++num);
    }
}
```
Output:
Post increment = 10
Pre increment = 12

## (iv) Decrement Operator (--)
This operator is used to decrement the value by 1.

Example:
```java
public class DecrementOperator {
    public static void main(String args[]) {
        // Initialize the variable
        int num = 10;

        // Post decrement
        System.out.println("Post decrement = " + num--);

        // Pre decrement
        System.out.println("Pre decrement = " + --num);
    }
}
```
Output:
Post decrement = 10
Pre decrement = 8

## (v) Bitwise Complement (~)
This operator is used to return the one’s complement representations of the input value.

Example:
```java
public class BitwiseComplement {
    public static void main(String args[]) {
        int num1 = 7;
        int num2 = -8;

        // Performing bitwise complement
        System.out.println(num1 + " 's bitwise complement = " + ~num1);
        System.out.println(num2 + " 's bitwise complement = " + ~num2);
    }
}
```
Output:
7's bitwise complement = -8
-8's bitwise complement = 7

# Assignment Operators in Java

Assignment operators in Java are used to assign a value to a variable. There are several assignment operators available in Java, each performing a specific operation while assigning the value.

## i) +=

This assignment operator is used to add the left operand with the right operand and then assigning it to a variable on the left.

### Example:

```java
public class AssignmentOperator {
    public static void main(String args[]) {
        int num = 10;
        num += 20;   // num = num + 20;
        System.out.println(num);
    }
}
```
Output:
30
## ii) -=
This assignment operator is used to subtract the left operand with the right operand and then assign it to a variable on the left.

Example:

```java
public class AssignmentOperator {
    public static void main(String args[]) {
        int num = 20;
        num -= 10;   // num = num - 10;
        System.out.println(num);
    }
}
```
Output:
10

## iii) *=
This assignment operator is used to multiply the left operand with the right operand and then assign it to a variable on the left.

Example:
```java
public class AssignmentOperator {
    public static void main(String args[]) {
        int num = 10;
        num *= 5;    // num = num * 5;
        System.out.println(num);
    }
}
```
Output:
50

## iv) /=
This assignment operator is used to divide the left operand with the right operand and then assign it to a variable on the left.

Example:
```java
public class AssignmentOperator {
    public static void main(String args[]) {
        int num = 10;
        num /= 2;   // num = num / 2;
        System.out.println(num);
    }
}
```
Output:
5

## v) %=
This assignment operator is used to modulo the left operand with the right operand and then assign it to a variable on the left.

Example:
```java
public class AssignmentOperator {
    public static void main(String args[]) {
        int num = 19;
        num %= 2;     // num = num % 2;
        System.out.println(num);
    }
}
```
Output:
1

# Relational Operators in Java

Relational operators in Java are used to check the relationship between two operands. Also known as comparison operators, they return a boolean value based on whether the comparison is true or false. These operators are commonly used in conditional statements like `if` and loops. Here are the different types of relational operators in Java:

## i) Equal to operator (==)

This operator checks whether the two operands are equal or not. If they are equal, it returns `true`; otherwise, it returns `false`.

### Example:

```java
public class EqualToOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 20;
      // Check if two operands are equal
      System.out.println(a == b);
  }
}
```
Output:
false

## ii) Not Equal to operator (!=)
This operator checks whether the two operands are not equal. It returns true if the left operand is not equal to the right operand; otherwise, it returns false.

Example:
```java
public class NotEqualToOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 20;
      // Check if two operands are not equal
      System.out.println(a != b);
  }
}
```
Output:
true

## iii) Greater than operator (>)
This operator checks whether the first operand is greater than the second operand. It returns true if the first operand is greater than the second operand; otherwise, it returns false.

Example:
```java
public class GreaterThanOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 20;
      // Check if the first operand is greater than the second operand
      System.out.println(a > b);
  }
}
```
Output:
false

## iv) Greater than equal to operator (>=)
This operator checks whether the first operand is greater than or equal to the second operand. It returns true if the first operand is greater than or equal to the second operand; otherwise, it returns false.

Example:
```java
public class GreaterThanEqualTo {
   public static void main(String args[]) {
      int a = 10;
      int b = 8;
      // Check if the first operand is greater than or equal to the second operand
      System.out.println(a >= b);
   }
}
```
Output:
true

## v) Less than operator (<)
This operator checks whether the first operand is less than the second operand. It returns true if the first operand is less than the second operand; otherwise, it returns false.

Example:
```java
public class LessThanOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 15;
      // Check if the first operand is less than the second operand
      System.out.println(a < b); 
  }
}
```
Output:
true

## vi) Less than or equal to operator (<=)
This operator checks whether the first operand is less than or equal to the second operand. It returns true if the first operand is less than or equal to the second operand; otherwise, it returns false.

Example:
```java
public class LessThanEqualTo {
   public static void main(String args[]) {
      int a = 10;
      int b = 5;
      // Check if the first operand is less than or equal to the second operand
      System.out.println(a <= b);
  }
}
```
Output:
false

# Logical Operators in Java

Logical operators in Java are used to perform logical operations such as AND, OR, and NOT on boolean values. They return true or false based on the evaluation of the expressions they operate on. There are three types of logical operators in Java:

## i) Logical AND operator (&&)

This operator returns `true` if both the conditions are true, otherwise, it returns `false`.

### Example:

```java
public class Solution {
	
   public static void main(String args[]) {
      int a = 10;
      int b = 20;
      int c = 30;
      
      System.out.println((b > a) && (c > b));  // true
      System.out.println((b > a) && (c < b));  // false
   }
}
```
Output:
true
false

## ii) Logical OR operator (||)
This operator returns true if any one of the conditions is true.

Example:
```java
public class LogicalOrOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 20;
      int c = 30;

      System.out.println((b > a) || (c < b));  // true
      System.out.println((b < a) || (c < b));  // false
  }
}
```
Output:
true
false

## iii) Logical NOT operator (!)
This operator is used to reverse the operand's value. If the operand's value is true, it returns false, and if the value of the operand is false, it returns true.

Example:
```java
public class LogicalNotOperator {
   public static void main(String args[]) {
      int a = 10;
      int b = 20;

      System.out.println( a!= b );  // true
      System.out.println( a== b );  // false
  }
}
```
Output:
true
false

# Bitwise Operators in Java

Bitwise operators in Java are used to perform bit manipulation on numbers. These operators work on individual bits of operands and are used in various low-level programming tasks.

## i) Bitwise AND operator (&)

The bitwise AND operator performs a bitwise AND operation on corresponding bits of two operands. It returns 1 if both bits are 1, otherwise 0.

### Example:

```java
public class BitwiseAndOperator {
   public static void main(String args[]) {
      int a = 6;
      int b = 7;
 
      System.out.println("a & b = " + (a & b)); 
  }
}
```
Output:
6

## ii) Bitwise OR operator (|)
The bitwise OR operator performs a bitwise OR operation on corresponding bits of two operands. It returns 1 if at least one bit is 1, otherwise 0.

Example:
```java
public class BitwiseOrOperator {
  public static void main(String args[]) {
     int a = 6;
     int b = 7;

     System.out.println("a | b = " + (a | b));
  }
}
```
Output:
7

## iii) Bitwise NOT operator (~)
The bitwise NOT operator inverts all bits of its operand. It flips 0s to 1s and 1s to 0s.

Example:
```java
public class BitwiseNotOperator {
   public static void main(String args[]) {
      int a = 6;

      System.out.println("~a = " + ~a); 
   }
}
```
Output:
-7

## iv) Bitwise XOR operator (^)
The bitwise XOR operator performs a bitwise XOR operation on corresponding bits of two operands. It returns 1 if the bits are different, otherwise 0.

Example:
```java
public class BitwiseXorOperator {
  public static void main(String args[]) {
     int a = 6;
     int b = 7;
     
     System.out.println("a ^ b = " + (a ^ b)); 
  }
}
```
Output:
1

## v) Left shift operator (<<)
The left shift operator shifts the bits of the first operand to the left by the number of positions specified by the second operand.

Example:
```java
public class LeftShiftOperator {
  public static void main(String args[]) {
     int a = 8;

     System.out.println("a << 2 = " + (a << 2)); 
  }
}
```
Output:
32

## vi) Right shift operator (>>)
The right shift operator shifts the bits of the first operand to the right by the number of positions specified by the second operand.

Example:
```java
public class RightShiftOperator {
  public static void main(String args[]) {
     int a = 8;

     System.out.println("a >> 2 = " + (a >> 2)); 
  }
}
```
Output: 2

## vii) Unsigned right shift operator (>>>)
The unsigned right shift operator shifts the bits of the first operand to the right by the number of positions specified by the second operand. It fills the leftmost bits with 0.

Example:
```java
public class UnsignedRightShiftOperator {
   public static void main(String args[]) {
      int a = 240;

      System.out.println("a >>> 2 = " + (a >>> 2)); 
   }
}
```
Output: 60

# Ternary Operator in Java

The ternary operator, also known as the conditional operator, is a unique operator in Java that takes three operands. It provides a compact way to write conditional expressions compared to if-else statements.

The syntax of the ternary operator is as follows:

```java
variable = expression1 ? expression2 : expression3
```

Here, if expression1 is true, expression2 is evaluated; otherwise, expression3 is evaluated.

Example:
```java
public class TernaryOperator {
   public static void main(String args[]) {
      int a = 50;
      int b = 100;
      int minimum;

      // Printing the value of a and b
      System.out.println("First Number = " + a);
      System.out.println("Second Number = " + b);
     
      // Find the minimum number 
      minimum = (a < b) ? a : b;

      // Printing the minimum number
      System.out.println("Minimum Number = " + minimum);
   }
}
```
Output:
First Number = 50
Second Number = 100
Minimum Number = 50

In the example above, we have two variables a and b, and we use the ternary operator to find the minimum between them. The expression (a < b) ? a : b checks if a is less than b. If true, it assigns the value of a to minimum; otherwise, it assigns the value of b to minimum.

# instanceof Operator in Java

The `instanceof` operator in Java is used to compare an object to a specified type. It checks whether an object is an instance of a particular class, a subclass, or a class implementing a specific interface. The result of the `instanceof` operator is either `true` or `false`.

## Syntax

```java
object instanceof type
```
Here, object is the object being compared, and type is the specified type (class or interface).

Example 1:
```java
public class InstanceOfExample {
   
   public static void main(String args[]) {
      
      // Creating objects of parent and child classes
      ParentClass obj1 = new ParentClass();  
      ChildClass obj2 = new ChildClass();

      // Comparing objects to specified types
      System.out.println("obj1 is instance of ParentClass = " + (obj1 instanceof ParentClass));
      System.out.println("obj1 is instance of ChildClass = " +  (obj1 instanceof ChildClass));
      System.out.println("obj1 is instance of MyInterface = " + (obj1 instanceof MyInterface));
      System.out.println("obj2 is instance of ParentClass = " + (obj2 instanceof ParentClass));
      System.out.println("obj2 is instance of ChildClass = " +  (obj2 instanceof ChildClass));
      System.out.println("obj2 is instance of MyInterface = " + (obj2 instanceof MyInterface));
  }
}

// Parent class
class ParentClass {}

// Interface
interface MyInterface {}

// Child class
class ChildClass extends ParentClass implements MyInterface {}
```
Output:
obj1 is instance of ParentClass = true
obj1 is instance of ChildClass = false
obj1 is instance of MyInterface = false
obj2 is instance of ParentClass = true
obj2 is instance of ChildClass = true
obj2 is instance of MyInterface = true

Example 2:
```java
public class InstanceOfOperator {

   public static void main(String args[]) {
 
      // Object assigned with null
      InstanceOfOperator obj = null;

      // Returns false
      System.out.println(obj instanceof InstanceOfOperator);
  }
}
```
Output:
false

In this example, the instanceof operator returns false when used with a null object because null is not an instance of any class or interface.
