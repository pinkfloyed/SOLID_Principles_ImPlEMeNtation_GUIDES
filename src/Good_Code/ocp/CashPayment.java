package Good_Code.ocp;

public class CashPayment implements PaymentProcessor {
    public void pay(double amount) {
        System.out.println("Paid in cash: " + amount);
    }
}
