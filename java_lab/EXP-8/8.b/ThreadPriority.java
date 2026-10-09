class PriorityA extends Thread {
    public void run() {
        System.out.println("Thread A started");
        for (int i = 1; i <= 4; i++) {
            System.out.println("from thread A i=" + i);
        }
        System.out.println("exit from A");
    }
}

class PriorityB extends Thread {
    public void run() {
        System.out.println("Thread B started");
        for (int j = 1; j <= 4; j++) {
            System.out.println("from thread B j=" + j);
        }
        System.out.println("exit from B");
    }
}

class PriorityC extends Thread {
    public void run() {
        System.out.println("thread C started");
        for (int k = 1; k <= 4; k++) {
            System.out.println("thread c =" + k);
        }
        System.out.println("exit from C");
    }
}

public class ThreadPriority {
    public static void main(String[] args) {
        Thread threadA = new PriorityA();
        Thread threadB = new PriorityB();
        Thread threadC = new PriorityC();

        threadC.setPriority(Thread.MAX_PRIORITY);
        threadB.setPriority(Thread.NORM_PRIORITY);
        threadA.setPriority(Thread.MIN_PRIORITY);

        System.out.println("start thread A");
        threadA.start();
        System.out.println("start thread B");
        threadB.start();
        System.out.println("start thread C");
        threadC.start();
        System.out.println("end of main thread");
    }
}
