public class Sold {
    String category;
    String item;
    int quantity;
    int price;
    Sold next; // This acts like your sold* next pointer

    public Sold(String category, String item, int quantity, int price) {
        this.category = category;
        this.item = item;
        this.quantity = quantity;
        this.price = price;
        this.next = null;
    }
}