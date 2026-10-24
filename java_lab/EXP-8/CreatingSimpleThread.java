class SimpleThread extends Thread {
    private final String message;

    SimpleThread(String message) {
        this.message = message;
    }

    @Override
    public void run() {
        System.out.println(message + " (" + Thread.currentThread().getName() + ")");
    }
}

public class CreatingSimpleThread {
    public static void main(String[] args) throws InterruptedException {
        Thread first = new SimpleThread("First thread is running");
        Thread second = new SimpleThread("Second thread is running");
        first.start();
        second.start();
        first.join();
        second.join();
        System.out.println("Both threads completed");
    }
}
