public class printmarksabove {
    public static void main(String[] args) {
        String[] names = {"Anu", "Bala", "Chitra", "Dinesh"};
        int[] marks = {78, 55, 91, 60};

        System.out.println("Students scoring above or equal to 60:");
        for (int i = 0; i < marks.length; i++) {
            if (marks[i] >= 60) {
                System.out.println(names[i] + " " + marks[i]);
            }
        }
    }
}
