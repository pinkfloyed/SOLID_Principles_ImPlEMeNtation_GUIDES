package Bad_Code.dip;

public class OrderService {
    public void payWithCash(double amount) {
        CashPayment payment = new CashPayment();
        payment.pay(amount);
    }
}

