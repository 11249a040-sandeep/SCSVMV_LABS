package Shape;

public class Circle {
    private final int radius;

    public Circle(int radius) {
        this.radius = radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public double area() {
        return Math.PI * radius * radius;
    }
}
