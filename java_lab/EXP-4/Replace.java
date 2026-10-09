import java.util.*;

public class Replace {
    public static void main(String args[]) {
        String a, e;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s1 = sc.nextLine();

        System.out.print("Enter the text to replace: ");

        a = sc.next();
        System.out.print("Enter the replacement text: ");
        e = sc.next();

        String replaceString = s1.replace(a, e);

        System.out.println("Updated string: " + replaceString);
    }
}
