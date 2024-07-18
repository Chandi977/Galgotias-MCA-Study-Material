package Cos;
public class Q33Thread extends Thread {
    public void run() {
        // Code to be executed by the thread
        for (int i = 0; i < 5; i++) {
            System.out.println("Thread running: " + i);
            try {
                // Sleep for 1 second
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        // Create an instance of Q33
        Q33Thread thread = new Q33Thread();
        // Start the thread
        thread.start();
    }
}
