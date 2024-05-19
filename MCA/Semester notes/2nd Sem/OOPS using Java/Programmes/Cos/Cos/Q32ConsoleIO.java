package Cos;

import java.util.Scanner;

public class Q32ConsoleIO {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Reading input from the console
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        // Writing output to the console
        System.out.println("Hello, " + name + "! Welcome to the console I/O example.");

        // Closing the scanner
        scanner.close();
    }
}
