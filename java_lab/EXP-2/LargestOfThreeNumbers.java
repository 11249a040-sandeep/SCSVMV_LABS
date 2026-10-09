import java.util.Scanner;

class LargestOfThreeNumbers {
    public static void main(String args[]) {
        int x, y, z;

        System.out.println("Enter three integers");
        Scanner in = new Scanner(System.in);

        x = in.nextInt();
        y = in.nextInt();
        z = in.nextInt();

        int largest = Math.max(x, Math.max(y, z));
        System.out.println("Largest number: " + largest);
    }
}
