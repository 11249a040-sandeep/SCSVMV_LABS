package div;

public class Div {
    public void divop(int a, int b) {
        if (b == 0) {
            throw new IllegalArgumentException("Cannot divide by zero");
        }
        System.out.println("Div :" + (a / b));
    }
}
