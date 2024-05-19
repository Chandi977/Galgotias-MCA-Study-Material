package Cos;

import java.util.Scanner;

public class Q15ArrayCopy {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] arr1 = new int[5];
            int[] arr2 = new int[5];
            for(int i = 0; i < 5; i++){
                arr1[i] = sc.nextInt();
            }

            System.arraycopy(arr1, 0, arr2, 0, 5);

            for(int i = 0; i < 5; i++){
                System.out.println("Value in array index "+ i + " is "+ arr2[i]);
            }
        }
    }
}
