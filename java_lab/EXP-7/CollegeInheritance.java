class BaseCollege {
    protected final String collegeName;
    protected final String principal;

    BaseCollege(String collegeName, String principal) {
        this.collegeName = collegeName;
        this.principal = principal;
    }
}

class DepartmentDetails extends BaseCollege {
    private final String department;
    private final String head;

    DepartmentDetails(String collegeName, String principal, String department, String head) {
        super(collegeName, principal);
        this.department = department;
        this.head = head;
    }

    void display() {
        System.out.println("College: " + collegeName);
        System.out.println("Principal: " + principal);
        System.out.println("Department: " + department);
        System.out.println("Head: " + head);
    }
}

public class CollegeInheritance {
    public static void main(String[] args) {
        new DepartmentDetails("NIT", "B.K. Sinha", "Electronics", "B.C. Rai").display();
    }
}
