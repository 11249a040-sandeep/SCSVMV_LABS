package Shape;

public class Triangle {
    private final int side1;
    private final int side2;
    private final int side3;

    public Triangle(int side1, int side2, int side3) {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    public int perimeter() {
        return side1 + side2 + side3;
    }

    public double area() {
        double semiperimeter = perimeter() / 2.0;
        return Math.sqrt(semiperimeter * (semiperimeter - side1)
                * (semiperimeter - side2) * (semiperimeter - side3));
    }
}
