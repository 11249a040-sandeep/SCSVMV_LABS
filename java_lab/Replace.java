import java.util.*;

public class Replace {
    public static void main(String args[]) {
        String a, e;

        Scanner sc = new Scanner(System.in);

        String s1 = sc.nextLine();

        System.out.println("Enter the variable to be replace and variable that is changed");

        a = sc.next();
        e = sc.next();

        String replaceString = s1.replace(a, e);

        System.out.println(replaceString);
    }
}
