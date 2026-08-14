import java.util.*;

class EvenOddSwitch {
    public static void main(String args[]) {
        int n, i;

        Scanner s = new Scanner(System.in);
        n = s.nextInt();

        switch (n % 2) {
            case 0:
                System.out.println("This number is even");
                break;

            case 1:
                System.out.println("This number is odd");
                break;
        }
    }
}
