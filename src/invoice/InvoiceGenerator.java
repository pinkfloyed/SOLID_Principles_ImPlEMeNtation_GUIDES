package invoice;

public class InvoiceGenerator {
    public void generate(String customerName, double amount) {
        System.out.println("Invoice generated for " + customerName + ": $" + amount);
    }
}