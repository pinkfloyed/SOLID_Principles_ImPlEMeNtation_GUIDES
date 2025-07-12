package Good_Code.dip;

public class OrderService 
{
    private DipOrderService payment;

    public OrderService(DipOrderService payment)
    {
        this.payment = payment;
    }

    public void checkout(double amount) 
    {
        payment.pay(amount);
    }
}
