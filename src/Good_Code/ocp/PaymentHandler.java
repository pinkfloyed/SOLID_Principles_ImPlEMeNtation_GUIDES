package Good_Code.ocp;

public class PaymentHandler {
    private PaymentProcessor processor;

    public PaymentHandler(PaymentProcessor processor) {
        this.processor = processor;
    }

    public void handlePayment(double amount) {
        processor.pay(amount);
    }
}
