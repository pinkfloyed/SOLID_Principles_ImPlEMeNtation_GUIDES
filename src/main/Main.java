package main;

import di.PaymentService;
import payment.CreditCardPayment;
import payment.PayPalPayment;

public class Main {
    public static void main(String[] args) {
        PaymentService creditCardService = new PaymentService(new CreditCardPayment());
        creditCardService.makePayment("user123", "Pinki", 150.0);

        PaymentService payPalService = new PaymentService(new PayPalPayment());
        payPalService.makePayment("fraud123", "Rinki", 200.0);
    }
}
