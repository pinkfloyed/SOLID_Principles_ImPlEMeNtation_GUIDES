package di;

import interfaces.PaymentProcessor;
import fraud.FraudChecker;
import invoice.InvoiceGenerator;

public class PaymentService {
    private PaymentProcessor processor;
    private FraudChecker fraudChecker;
    private InvoiceGenerator invoiceGenerator;

    public PaymentService(PaymentProcessor processor) {
        this.processor = processor;
        this.fraudChecker = new FraudChecker();
        this.invoiceGenerator = new InvoiceGenerator();
    }

    public void makePayment(String userId, String customerName, double amount) {
        if (fraudChecker.isFraudulent(userId)) {
            System.out.println("Payment rejected due to fraud detection.");
            return;
        }
        processor.processPayment(amount);
        invoiceGenerator.generate(customerName, amount);
    }
}
