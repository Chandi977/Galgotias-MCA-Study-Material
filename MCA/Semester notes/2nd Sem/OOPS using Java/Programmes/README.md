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

