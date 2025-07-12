package Good_Code.ocp;

public class CreditCardPayment implements PaymentProcessor 
{
    public void pay(double amount)
    {
        System.out.println("Paid with credit card: " + amount);
    }
}
