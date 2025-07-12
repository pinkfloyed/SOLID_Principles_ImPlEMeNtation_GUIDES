package Bad_Code.ocp;

public class PaymentService {
    public void pay(String type, double amount) {
        if (type.equals("cash")) 
        {
            System.out.println("Paid in cash: " + amount);
        } 
        else if (type.equals("credit")) 
        {
            System.out.println("Paid by credit card: " + amount);
        } 
        else 
        {
            System.out.println("Unknown payment type.");
        }
    }
}
