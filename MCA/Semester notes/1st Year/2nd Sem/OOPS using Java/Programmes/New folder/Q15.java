//WAP in java to copy the elements from one array to another array

public class Q15 {

    public static void main(String[] args) {
        // Declare and initialize an array
        int[] sourceArray = {1, 2, 3, 4, 5};

        // Create a destination array with the same length as sourceArray
        int[] destinationArray = new int[sourceArray.length];

        // Copy elements from sourceArray to destinationArray
        for (int i = 0; i < sourceArray.length; i++) {
            destinationArray[i] = sourceArray[i];
        }

        // Print the source and destination arrays
        System.out.println("Source Array:");
        printArray(sourceArray);

        System.out.println("\nDestination Array:");
        printArray(destinationArray);
    }

    // Method to print an array
    public static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(); // Move to the next line
    }
}
