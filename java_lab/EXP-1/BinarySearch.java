import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String ar[]) {
        int i, mid, first, last, x, n, flag = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        n = sc.nextInt();

        int a[] = new int[n];

        System.out.println("Enter elements of array:");
        for (i = 0; i < n; ++i)
            a[i] = sc.nextInt();

        Arrays.sort(a);
        System.out.println("Sorted array: " + Arrays.toString(a));

        System.out.println("Enter element to search:");
        x = sc.nextInt();

        first = 0;
        last = n - 1;

        while (first <= last) {
            mid = (first + last) / 2;

            if (a[mid] > x)
                last = mid - 1;
            else if (a[mid] < x)
                first = mid + 1;
            else {
                flag = 1;
                System.out.println("Element found at sorted position " + (mid + 1));
                break;
            }
        }

        if (flag == 0)
            System.out.println("Element not found");
    }
}
