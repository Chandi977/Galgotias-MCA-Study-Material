//WAP in java to implement the various operators in java

public class Q8 {
    public static void main(String[] args) {
        // Arithmetic operators
        int a = 10, b = 20;
        System.out.println("Arithmetic Operators:");
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("b / a = " + (b / a));
        System.out.println("b % a = " + (b % a));
        
        // Relational operators
        System.out.println("\nRelational Operators:");
        System.out.println("a == b: " + (a == b));
        System.out.println("a != b: " + (a != b));
        System.out.println("a > b: " + (a > b));
        System.out.println("a < b: " + (a < b));
        System.out.println("b >= a: " + (b >= a));
        System.out.println("b <= a: " + (b <= a));
        
        // Logical operators
        boolean x = true, y = false;
        System.out.println("\nLogical Operators:");
        System.out.println("x && y: " + (x && y));
        System.out.println("x || y: " + (x || y));
        System.out.println("!x: " + (!x));
        
        // Bitwise operators
        int m = 5, n = 7;
        System.out.println("\nBitwise Operators:");
        System.out.println("m & n: " + (m & n));
        System.out.println("m | n: " + (m | n));
        System.out.println("m ^ n: " + (m ^ n));
        System.out.println("~m: " + (~m));
        
        // Assignment operators
        int c = 10;
        System.out.println("\nAssignment Operators:");
        c += 5;  // Equivalent to c = c + 5
        System.out.println("c += 5: " + c);
        
        c -= 3;  // Equivalent to c = c - 3
        System.out.println("c -= 3: " + c);
        
        c *= 2;  // Equivalent to c = c * 2
        System.out.println("c *= 2: " + c);
        
        c /= 2;  // Equivalent to c = c / 2
        System.out.println("c /= 2: " + c);
        
        c %= 3;  // Equivalent to c = c % 3
        System.out.println("c %= 3: " + c);
        
        c <<= 2;  // Equivalent to c = c << 2
        System.out.println("c <<= 2: " + c);
        
        c >>= 2;  // Equivalent to c = c >> 2
        System.out.println("c >>= 2: " + c);
        
        c &= 2;  // Equivalent to c = c & 2
        System.out.println("c &= 2: " + c);
        
        c |= 2;  // Equivalent to c = c | 2
        System.out.println("c |= 2: " + c);
        
        c ^= 2;  // Equivalent to c = c ^ 2
        System.out.println("c ^= 2: " + c);
        
        // Unary operators
        int d = 5;
        System.out.println("\nUnary Operators:");
        System.out.println("++d: " + (++d));
        System.out.println("--d: " + (--d));
        System.out.println("-d: " + (-d));
        System.out.println("+d: " + (+d));
        
        // Conditional (Ternary) Operator
        int max = (a > b) ? a : b;
        System.out.println("\nConditional (Ternary) Operator:");
        System.out.println("max = " + max);
    }
}
