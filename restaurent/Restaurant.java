public class Restaurant {
    private Sold front;
    private Sold rear;

    public Restaurant() {
        this.front = null;
        this.rear = null;
    }

    public void queue(String category, String item, int quantity, int price) {
        Sold newNode = new Sold(category, item, quantity, price);
        if (rear == null) {
            front = rear = newNode;
        } else {
            rear.next = newNode;
            rear = newNode;
        }
    }

    public int calculateTotal() {
        Sold temp = front;
        int total = 0;
        while (temp != null) {
            total += (temp.price * temp.quantity);
            temp = temp.next;
        }
        return total;
    }

    public void display() {
        Sold temp = front;
        if (temp == null) {
            System.out.println("Queue is empty!");
            return;
        }

        System.out.println("ITEMS \t PRICE \t QTY \t CATEGORY");
        System.out.println("------------------------------------------");
        while (temp != null) {
            System.out.println(temp.item + "\t " + temp.price + "\t " 
                               + temp.quantity + "\t " + temp.category);
            temp = temp.next;
        }
        System.out.println("------------------------------------------");
        System.out.println("THE TOTAL SALES IS: " + calculateTotal());
    }
}