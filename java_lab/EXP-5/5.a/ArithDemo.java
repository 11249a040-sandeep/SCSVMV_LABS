import add.Add;
import div.Div;
import mul.Mul;
import sub.Sub;

public class ArithDemo {
    public static void main(String[] args) {
        Add ad = new Add();
        Sub su = new Sub();
        Mul mu = new Mul();
        Div di = new Div();

        ad.addop(20, 10);
        su.subop(20, 10);
        mu.mulop(20, 10);
        di.divop(20, 10);
    }
}
