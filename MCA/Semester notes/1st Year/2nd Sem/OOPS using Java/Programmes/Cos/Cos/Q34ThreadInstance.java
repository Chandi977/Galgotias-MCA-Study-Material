package Cos;

public class Q34ThreadInstance implements Runnable {
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
        // Create an instance of Q34
        Q34ThreadInstance myRunnable = new Q34ThreadInstance();
        // Create a Thread object with myRunnable as the target
        Thread thread = new Thread(myRunnable);
        // Start the thread
        thread.start();
    }
}
