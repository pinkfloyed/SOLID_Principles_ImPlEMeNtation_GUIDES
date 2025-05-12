package Good_Code.dip;

public class App {
    public static void main(String[] args) {
        DipOrderService processor = new UpiPayment();
        OrderService service = new OrderService(processor);
        service.checkout(100.0);
    }
}
