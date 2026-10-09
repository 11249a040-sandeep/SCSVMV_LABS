import java.util.Scanner;

public class Armstrong {
    public static void main(String args[]) {
        int n, nu, num = 0, rem;

        Scanner scan = new Scanner(System.in);

        System.out.print("Enter a non-negative number: ");
        n = scan.nextInt();

        if (n < 0) {
            System.out.println("Please enter a non-negative number.");
            return;
        }

        nu = n;
        int digits = String.valueOf(n).length();

        do {
            rem = nu % 10;
            num += (int) Math.pow(rem, digits);
            nu = nu / 10;
        } while (nu != 0);

        if (num == n) {
            System.out.print("Armstrong Number");
        } else {
            System.out.print("Not an Armstrong Number");
        }
    }
}
