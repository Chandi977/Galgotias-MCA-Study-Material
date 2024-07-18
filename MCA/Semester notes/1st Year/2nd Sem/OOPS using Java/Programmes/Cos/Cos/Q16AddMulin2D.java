package Cos;
import java.util.Scanner;

public class Q16AddMulin2D {
    public static void addMatrix(int[][] arr1, int[][] arr2, int[][] arr3) {
        int m = arr1.length;
        int n = arr1[0].length;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        
        System.out.println("Resultant matrix after addition:");
        printMatrix(arr3);
    }
    
    public static void multiplyMatrix(int[][] arr1, int[][] arr2, int[][] arr3) {
        int m = arr1.length;
        int n = arr1[0].length;
        int p = arr2[0].length;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                arr3[i][j] = 0; // Reset value before calculating
                for (int k = 0; k < n; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    
    public static void inputMatrix(int[][] matrix, Scanner sc) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter size of first matrix (m x n): ");
            int m = sc.nextInt();
            int n = sc.nextInt();
            System.out.println("Enter size of second matrix (o x p): ");
            int o = sc.nextInt();
            int p = sc.nextInt();
            
            if (n == o) {
                int[][] arr1 = new int[m][n];
                int[][] arr2 = new int[o][p];
                int[][] arr3 = new int[m][p];
                
                System.out.println("Enter elements of first matrix:");
                inputMatrix(arr1, sc);
                
                System.out.println("Enter elements of second matrix:");
                inputMatrix(arr2, sc);
                
                // Perform addition
                addMatrix(arr1, arr2, arr3);

                // Perform multiplication
                System.out.println("Resultant matrix after multiplication:");
                multiplyMatrix(arr1, arr2, arr3);
            } else {
                System.out.println("Matrices are not compatible for multiplication. Exiting...");
            }
        }
    }
}
