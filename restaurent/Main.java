import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Restaurant obj1 = new Restaurant();

        while (true) {
            System.out.println("\n1. Add Item\n2. View Report\n3. Exit");
            System.out.print("Select your choice: ");
            int choice = sc.nextInt();

            if (choice == 1) {
                System.out.print("Enter item name: ");
                String n = sc.next();
                System.out.print("Enter price: ");
                int p = sc.nextInt();
                System.out.print("Enter quantity: ");
                int q = sc.nextInt();
                System.out.print("Enter category (drink/meal): ");
                String c = sc.next();
                obj1.queue(c, n, q, p);
            } else if (choice == 2) {
                obj1.display();
            } else {
                break;
            }
        }
        sc.close();
    }
}