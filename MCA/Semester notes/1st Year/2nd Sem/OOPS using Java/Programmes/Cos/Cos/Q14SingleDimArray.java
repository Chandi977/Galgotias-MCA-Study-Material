package Cos;

import java.util.Scanner;

public class Q14SingleDimArray {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] arr = new int[5];
            for(int i = 0; i < 5; i++){
                arr[i] = sc.nextInt();
            }
            for(int i = 0; i < 5; i++){
                System.out.println("Value in array index "+ i + " is "+ arr[i]);
            }
        }
    }
}
