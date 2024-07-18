// WAP in java to perform the addition and multiplication of 2-D array

public class Q16 {

    public static void main(String[] args) {
        int[][] arr1 = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int[][] arr2 = {
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
        };

        // Perform addition
        int[][] sum = addArrays(arr1, arr2);
        System.out.println("Sum of the arrays:");
        printArray(sum);

        // Perform multiplication
        int[][] product = multiplyArrays(arr1, arr2);
        System.out.println("\nProduct of the arrays:");
        printArray(product);
    }

    // Method to add two 2-D arrays
    public static int[][] addArrays(int[][] arr1, int[][] arr2) {
        int[][] result = new int[arr1.length][arr1[0].length];
        
        for (int i = 0; i < arr1.length; i++) {
            for (int j = 0; j < arr1[0].length; j++) {
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        return result;
    }

    // Method to multiply two 2-D arrays
    public static int[][] multiplyArrays(int[][] arr1, int[][] arr2) {
        int[][] result = new int[arr1.length][arr2[0].length];
        
        for (int i = 0; i < arr1.length; i++) {
            for (int j = 0; j < arr2[0].length; j++) {
                for (int k = 0; k < arr2.length; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        return result;
    }

    // Method to print a 2-D array
    public static void printArray(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
