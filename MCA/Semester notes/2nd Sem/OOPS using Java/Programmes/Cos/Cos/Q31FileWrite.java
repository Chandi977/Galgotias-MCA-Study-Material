package Cos;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Q31FileWrite {
    public static void main(String[] args) {
        String fileName = "example.txt";
        String content = "Hello, this is a sample text.";

        // Writing to a file using FileWriter
        try (FileWriter writer = new FileWriter(fileName)) {
            writer.write(content);
            System.out.println("Content written to file successfully.");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }

        // Reading from a file using FileReader
        try (FileReader reader = new FileReader(fileName)) {
            int ch;
            System.out.println("Content read from file:");
            while ((ch = reader.read()) != -1) {
                System.out.print((char) ch);
            }
        } catch (IOException e) {
            System.out.println("Error reading from file: " + e.getMessage());
        }
    }
}
