import Shape.Circle;
import Shape.Square;
import Shape.Triangle;
import java.util.Scanner;

public class Calculate {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter The side of the Square: ");
        int side = scanner.nextInt();
        Square square = new Square(side);
        System.out.println("Perimeter of Square is " + square.perimeter());
        System.out.println("Area of Square is " + square.area());

        System.out.println("Enter The radius of the Circle: ");
        int radius = scanner.nextInt();
        Circle circle = new Circle(radius);
        System.out.println("Perimeter of Circle is " + circle.perimeter());
        System.out.println("Area of Circle is " + circle.area());

        System.out.println("Enter The Side1 of the Triangle: ");
        int side1 = scanner.nextInt();
        System.out.println("Enter The Side2 of the Triangle: ");
        int side2 = scanner.nextInt();
        System.out.println("Enter The Side3 of the Triangle: ");
        int side3 = scanner.nextInt();
        Triangle triangle = new Triangle(side1, side2, side3);
        System.out.println("Perimeter of Triangle is " + triangle.perimeter());
        System.out.println("Area of Triangle is " + triangle.area());
    }
}
