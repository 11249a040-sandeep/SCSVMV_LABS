import java.io.FileReader;
import java.io.IOException;

public class Filereader {
    public static void main(String[] args) {
        try (FileReader fileReader = new FileReader("sample2.txt")) {
            int character;
            while ((character = fileReader.read()) != -1) {
                System.out.println((char) character);
            }
        } catch (IOException exception) {
            System.out.println("Exception: " + exception);
        }
    }
}
