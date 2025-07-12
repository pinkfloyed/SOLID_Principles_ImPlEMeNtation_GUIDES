package Good_Code.dip;

public class UpiPayment implements DipOrderService
{
    public void pay(double amount) 
    {
        System.out.println("Paid via UPI: " + amount);
    }
}
