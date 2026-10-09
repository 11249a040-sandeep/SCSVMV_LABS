import java.util.Scanner;

public class LargestSmallest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        if (n <= 0) {
            System.out.println("The number of elements must be positive.");
            return;
        }

        int[] a = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        int min = a[0];
        int max = a[0];

        for (int i = 1; i < a.length; i++) {
            if (a[i] > max) {
                max = a[i];
            }

            if (a[i] < min) {
                min = a[i];
            }

        }

        System.out.println("Largest Number in a given array is : " + max);
        System.out.println("Smallest Number in a given array is : " + min);
    }
}
