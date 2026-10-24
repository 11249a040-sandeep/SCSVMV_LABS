import java.io.FileWriter;
import java.io.IOException;

public class WriteFile {
    public static void main(String[] args) {
        try (FileWriter fileWriter = new FileWriter("sample2.txt")) {
            for (char character = 'A'; character <= 'Z'; character++) {
                fileWriter.write(character);
            }
            System.out.println("Wrote A-Z to sample2.txt");
        } catch (IOException exception) {
            System.out.println("Exception: " + exception);
        }
    }
}
