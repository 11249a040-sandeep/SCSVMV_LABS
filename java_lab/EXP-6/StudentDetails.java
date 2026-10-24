public class StudentDetails {
    public static void main(String[] args) {
        StudentRecord student = new StudentRecord("Anu", 101, 85, 90);
        student.display();
        System.out.println("Total marks: " + (student.mark1 + student.mark2));
    }

    private static class StudentRecord {
        private final String name;
        private final int rollNumber;
        private final int mark1;
        private final int mark2;

        StudentRecord(String name, int rollNumber, int mark1, int mark2) {
            this.name = name;
            this.rollNumber = rollNumber;
            this.mark1 = mark1;
            this.mark2 = mark2;
        }

        void display() {
            System.out.println("Name of Student: " + name);
            System.out.println("Roll No. of Student: " + rollNumber);
            System.out.println("Marks of Subject 1: " + mark1);
            System.out.println("Marks of Subject 2: " + mark2);
        }
    }
}
