import java.util.Scanner;

public class MarksAbvsixty {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int count = scanner.nextInt();
        String[] name = new String[count];
        int[] marks = new int[count];

        for (int i = 0; i < count; i++) {
            System.out.print("Enter name and mark for student " + (i + 1) + ": ");
            name[i] = scanner.next();
            marks[i] = scanner.nextInt();
        }

        System.out.println("Students scoring 60 or above:");
        for (int i = 0; i < count; i++) {
            if (marks[i] >= 60) {
                System.out.println(name[i] + "  " + marks[i]);
            }
        }
    }
}
