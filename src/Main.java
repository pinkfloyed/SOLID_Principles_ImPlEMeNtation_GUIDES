import Good_Code.ocp.*;
import Good_Code.dip.*;
import Good_Code.srp.*;

public class Main {
    public static void main(String[] args) {
        // OCP demo
        PaymentProcessor payment = new CreditCardPayment();
        PaymentHandler handler = new PaymentHandler(payment);
        handler.handlePayment(750.0);

        // DIP demo
        OrderService orderService = new OrderService(new UpiPayment());
        orderService.checkout(780.0);

        // SRP demo
        SrpOrderService srpOrder = new SrpOrderService();
        InvoiceService invoice = new InvoiceService();
        srpOrder.takeOrder("Pizza");
        invoice.generateInvoice("Pizza");
    }
}
