package Cos;

public class Q29CustomException {
    public static void main(String[] args) {
        try {
            // Simulating a condition where a custom exception needs to be thrown
            int balance = 100;
            int amountToWithdraw = 200;
            withdrawMoney(balance, amountToWithdraw);
        } catch (InsufficientBalanceException e) {
            System.out.println("Caught exception: " + e.getMessage());
        }
    }

    // Method that throws a custom exception if the balance is insufficient
    public static void withdrawMoney(int balance, int amount) throws InsufficientBalanceException {
        if (balance < amount) {
            throw new InsufficientBalanceException("Insufficient balance in the account.");
        } else {
            System.out.println("Withdrawal successful. Remaining balance: " + (balance - amount));
        }
    }
}

// Custom exception class for insufficient balance
class InsufficientBalanceException extends Exception {
    public InsufficientBalanceException(String message) {
        super(message);
    }
}
