package Bad_Code.srp;

public class RestaurantService {
    public void takeOrder(String order) {
        System.out.println("Taking order: " + order);
    }

    public void cookOrder(String order) {
        System.out.println("Cooking order: " + order);
    }

    public void generateInvoice(String order) {
        System.out.println("Generating invoice for: " + order);
    }
}
