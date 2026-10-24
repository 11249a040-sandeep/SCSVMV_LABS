public class FileReader {
    public static void main(String[] args) {
        try (java.io.FileReader reader = new java.io.FileReader("sample2.txt")) {
            int character;
            while ((character = reader.read()) != -1) {
                System.out.print((char) character);
            }
        } catch (java.io.IOException exception) {
            System.out.println("Exception: " + exception.getMessage());
        }
    }
}
