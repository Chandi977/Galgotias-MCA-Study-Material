import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Q30 {
    public static void main(String[] args) {
        String fileName = "example.txt";
        String content = "Hello, this is a sample text.";

        // Writing to a file using FileOutputStream
        try (FileOutputStream outputStream = new FileOutputStream(fileName)) {
            byte[] bytes = content.getBytes();
            outputStream.write(bytes);
            System.out.println("Content written to file successfully.");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }

        // Reading from a file using FileInputStream
        try (FileInputStream inputStream = new FileInputStream(fileName)) {
            int ch;
            System.out.println("Content read from file:");
            while ((ch = inputStream.read()) != -1) {
                System.out.print((char) ch);
            }
        } catch (IOException e) {
            System.out.println("Error reading from file: " + e.getMessage());
        }
    }
}
