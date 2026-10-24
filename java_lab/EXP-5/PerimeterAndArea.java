public class PerimeterAndArea {
    public static void main(String[] args) {
        double side = 4;
        double radius = 3;
        double base = 6;
        double height = 4;

        System.out.println("Square perimeter: " + (4 * side));
        System.out.println("Square area: " + (side * side));
        System.out.println("Circle perimeter: " + (2 * Math.PI * radius));
        System.out.println("Circle area: " + (Math.PI * radius * radius));
        System.out.println("Triangle area: " + (base * height / 2));
    }
}
