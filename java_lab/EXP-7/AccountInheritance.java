class BaseAccount {
    protected double balance;

    BaseAccount(double balance) {
        this.balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }
}

class SavingsAccount extends BaseAccount {
    private final double interestRate;

    SavingsAccount(double balance, double interestRate) {
        super(balance);
        this.interestRate = interestRate;
    }

    void display() {
        System.out.println("Balance: " + balance);
        System.out.println("Interest rate: " + interestRate + "%");
    }
}

public class AccountInheritance {
    public static void main(String[] args) {
        SavingsAccount account = new SavingsAccount(5000, 6.5);
        account.deposit(2000);
        account.display();
    }
}
