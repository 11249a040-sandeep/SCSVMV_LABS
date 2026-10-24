public class FileWriter {
    public static void main(String[] args) {
        try (java.io.FileWriter writer = new java.io.FileWriter("sample2.txt")) {
            writer.write("Java file handling demonstration.\n");
            writer.write("This text was written by FileWriter.");
            System.out.println("File written successfully.");
        } catch (java.io.IOException exception) {
            System.out.println("Exception: " + exception.getMessage());
        }
    }
}
