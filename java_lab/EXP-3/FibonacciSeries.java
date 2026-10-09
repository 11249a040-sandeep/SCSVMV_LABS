import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the value of n: ");
        int n = s.nextInt();

        if (n <= 0) {
            System.out.println("Number of terms must be positive.");
            return;
        }

        fibonacci(n);
    }

    public static void fibonacci(int n) {
        if (n == 1) {
            System.out.println("0");
        } else {
            System.out.print("0 1");

            int a = 0;
            int b = 1;

            for (int i = 2; i < n; i++) {
                int nextNumber = a + b;

                System.out.print(" " + nextNumber);

                a = b;
                b = nextNumber;
            }
            System.out.println();
        }
    }
}
